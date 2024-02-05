# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2024.                 #
# ######################################### #

# ===============================================================================================
# IMPORTANT
# ===============================================================================================
# Only make changes to this file just before a minor version bump (need a separate commit though)
# to avoid having multiple xboinc versions with out-of-sync executables.
# ===============================================================================================

import numpy as np
from pathlib import Path

import xobjects as xo
import xpart as xp
import xtrack as xt

from .version import XbVersion, assert_versions
from .default_tracker import default_element_classes, get_default_tracker
from .output import XbState

# TODO: How to make input file smaller??
# Ideas:
#  - Do not use names for the elements (they take ~40% of the size of ElementRefData)
#  - Put all elements in the array instead of Refs (~7%) not sure if possible
#  - Remove Markers, empty Drifts, etc by default
#  - Shrink buffer by removing free space

# The build time of the input file is largely dominated by the rebuilding of the
# ElementRefData. For this reason we cache the line, such that when submitting
# many jobs on the same line only the first job creation takes some time.
_previous_line_cache = {}
    # TODO: Caching does not work as moving elements to buffer does not work correctly
    #       Can we cache by making the line_metadata in one buffer which we then always merge to a new one?

_xboinc_context = xo.ContextCpu()

# The class ElementRefData is dynamically generated inside the tracker. We
# extract it here and use it to create the line metadata inside XbInput
ElementRefData = xt.tracker._element_ref_data_class_from_element_classes(
                        default_element_classes)
if {f.name for f in ElementRefData._fields} != {'elements', 'names'}:
    raise RunTimeError("The definition of `ElementRefData` has changed inside Xtrack! "
                     + "This renders Xboinc incompatible. Please ask a dev to update Xboinc.")

class XbInput(xo.Struct):
    _version         = XbVersion    # This HAS to be the first field!
    num_turns        = xo.Int64
    num_elements     = xo.Int64
    checkpoint_every = xo.Int64
    _parity_check    = xo.Int64      # TODO
    xb_state        = XbState
    line_metadata    = xo.Ref(ElementRefData)

    def __init__(self, *args, **kwargs):
        assert_versions()
        if '_xobject' not in kwargs:
            kwargs['_version'] = XbVersion()
            # Build particles / XbState
            particles = kwargs.pop('particles', None)
            xb_state = kwargs.get('xb_state', None)
            if particles is not None:
                if xb_state is not None:
                    raise ValueError("Use `xb_state` or `particles`, not both.")
                kwargs['xb_state'] = XbState(particles=particles, _i_turn=0)
            elif xb_state is None or not isinstance(xb_state, XbState):
                raise ValueError("Need to provide `xb_state` or `particles`.")
            line = kwargs.pop('line', None)
            line_metadata = kwargs.pop('line_metadata', None)
            kwargs.setdefault('_buffer', _xboinc_context.new_buffer())
            kwargs.setdefault('checkpoint_every', -1)
        super().__init__(**kwargs)
        self.line_metadata = _build_line_metadata(line, _buffer=self._buffer)
        self.num_elements = len(line.elements)

    @classmethod
    def from_binary(cls, filename, offset=0, raise_version_error=True):
        # Read binary
        filename = Path(filename)
        with filename.open('rb') as fid:
            state_bytes = fid.read()
        buffer_data = _xboinc_context.new_buffer(capacity=len(state_bytes))
        buffer_data.buffer[:] = np.frombuffer(state_bytes, dtype=np.int8)
        # Cast to XbVersion to verify versions of xsuite packages
        version_offset = -1
        for field in cls._fields:
            if field.name == '_version':
                version_offset = field.offset
        if version_offset == -1:
            raise ValueError("No xofield `_version` found in XbInput!")
        xb_ver = XbVersion._from_buffer(buffer=buffer_data, offset=offset+version_offset)
        if not xb_ver.assert_version(raise_error=raise_version_error, filename=filename):
            return None
        # Retrieve simulation input
        return cls._from_buffer(buffer=buffer_data, offset=offset)

    def to_binary(self, filename):
        assert self._offset == 0
        filename = Path(filename).expanduser().resolve()
        with filename.open('wb') as fid:
            fid.write(self._buffer.buffer.tobytes())


    @property
    def version(self):
        return self._version

    @property
    def line(self):
        return xt.Line(elements=self.line_metadata.elements,
                       element_names=self.line_metadata.names)
    @line.setter
    def line(self, val):
        raise NotImplementedError

    @property
    def particles(self):
        return self.xb_state.particles

    @particles.setter
    def particles(self, val):
        raise NotImplementedError


def _build_line_metadata(line, _buffer=None):
    line_id = id(line)
    _previous_line_cache = {}  # TODO
    if line_id not in _previous_line_cache:
        _check_config(line)
        _check_compatible_elements(line)
        if _buffer is None:
            _buffer = _xboinc_context.new_buffer()
        element_ref_data = ElementRefData(
            elements=len(line.element_names),
            names=list(line.element_names),
            _buffer=_buffer,
        )
        element_ref_data.elements = [
            line.element_dict[name]._xobject for name in line.element_names
        ]
        _previous_line_cache[line_id] = element_ref_data

    return _previous_line_cache[line_id]

def _check_config(line):
    _, default_config_hash = get_default_tracker()
    for key, val in default_config_hash:
        if key not in line.config:
            print(f"Warning: Configuration option `{key}` not found in line.config! "
                + f"Set to Xboinc default `{val}`.")
        elif val != line.config[key]:
            print(f"Warning: Configuration option `{key}` set to `{line.config[key]}` "
                + f"in line.config! Not supported by Xboinc. Overwritten to default `{val}`.")
    for key in set(line.config.keys()) - {k[0] for k in default_config_hash}:
        print(f"Warning: Configuration option `{key}` requested in line.config!"
            + f"Not supported by Xboinc. Ignored.")


def _check_compatible_elements(line):
    default_elements = [d.__name__ for d in default_element_classes]
    for ee in np.unique([ee.__class__.__name__ for ee in line.elements]):
        if ee not in default_elements:
            raise ValueError(f"Element of type {ee} not supported "
                           + f"in this version of xboinc!")

