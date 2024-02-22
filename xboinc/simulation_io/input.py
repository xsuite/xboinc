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
from .default_tracker import default_element_classes, get_default_config, ElementRefData
from .output import XbState

# TODO: check compilation on office PC
# TODO: line.particle_ref is not dumped nor retrieved... Why is this no issue?
# TODO: update xsuite_versions
# TODO: parity
# TODO: can we cache the view on line?

# TODO: Caching does not work as moving elements to buffer does not work correctly
#       Can we cache by making the line_metadata in one buffer which we then always merge to a new one?
#       Input creation should be faster than it is now (~4s for LHC)
# The build time of the input file is largely dominated by the rebuilding of the
# ElementRefData. For this reason we cache the line, such that when submitting
# many jobs on the same line only the first job creation takes some time.
_previous_line_cache = {}

_xboinc_context = xo.ContextCpu()


class XbInput(xo.Struct):
    _version         = XbVersion    # This HAS to be the first field!
    num_turns        = xo.Int64
    _num_elements    = xo.Int64     # Total number of elements in the line
    ele_start        = xo.Int64
    ele_stop         = xo.Int64
    checkpoint_every = xo.Int64
    _parity_check    = xo.Int64     # TODO
    xb_state         = XbState
    line_metadata    = xo.Ref(ElementRefData)

    def __init__(self, **kwargs):
        """
        Parameters
        ----------
        particles : xpart.Particles
            The particles to be tracked.
        xb_state : XbState
            The state of the particles. Use either this parameter or
            particles, not both.
        line : xtrack.Line
            The line to be tracked.
        line_metadata : ElementRefData
            Currently not supported (need to fix bug in xobjects).
        num_turns : Int64
            The number of turns to track.
        ele_start : Int64, optional
            The index of the element to start in the first turn.
            This can also be a string (the name of the element).
            Defaults to 0.
        ele_stop : Int64, optional
            The index of the element to stop in the last turn.
            This can also be a string (the name of the element).
            Defaults to 0.
        checkpoint_every : Int64, optional
            When to checkpoint. The default value -1 represents no
            checkpointing.
        store_element_names : bool, optional
            Whether or not to store the element names in the binary.
            Defaults to True.

        The other xofields are generated automatically and will be
        overwritten if provided.
        """

        assert_versions()

        # Get some defaults
        kwargs['_version'] = XbVersion()
        kwargs.setdefault('_buffer', _xboinc_context.new_buffer())
        kwargs.setdefault('checkpoint_every', -1)
        kwargs.setdefault('num_turns', 1)
        if kwargs['checkpoint_every'] < -1 or not isinstance(kwargs['checkpoint_every'], int):
            raise ValueError(f"Invalid value {kwargs['checkpoint_every']} for `checkpoint_every`!")
        kwargs.setdefault('num_turns', 1)
        if kwargs['num_turns'] <= 0 or not isinstance(kwargs['num_turns'], int):
            raise ValueError(f"Invalid value {kwargs['num_turns']} for `num_turns`!")

        # Pre-build particles / XbState; will be moved to correct buffer at XoStruct init
        particles = kwargs.pop('particles', None)
        xb_state = kwargs.get('xb_state', None)
        if particles is not None:
            if xb_state is not None:
                raise ValueError("Use `xb_state` or `particles`, not both.")
            kwargs['xb_state'] = XbState(particles=particles, _i_turn=0)
        elif xb_state is None or not isinstance(xb_state, XbState):
            raise ValueError("Need to provide `xb_state` or `particles`.")

        # Get the line, build the metadata after building the XoStruct
        # We need to do it like this because the elements are not moved correctly
        line = kwargs.pop('line', None)
        if line is None or not isinstance(line, xt.Line):
            raise ValueError("Need to provide `line` to XbInput.")
        if kwargs.pop('line_metadata', None) is not None:
            raise ValueError("Cannot provide the line metadata directly!")
        store_element_names = kwargs.pop('store_element_names', True)
        num_elements = len(line.elements)

        # Get the starting element
        ele_start = kwargs.setdefault('ele_start', 0)
        if kwargs['xb_state']._particles.start_tracking_at_element >= 0:
            if ele_start != 0 \
            and kwargs['xb_state']._particles.start_tracking_at_element != ele_start:
                raise ValueError("The argument `ele_start` is used, but "
                               + "particles.start_tracking_at_element is set as well. "
                               + "Choose one.")
            kwargs['ele_start'] = int(kwargs['xb_state']._particles.start_tracking_at_element)
            kwargs['xb_state']._particles.start_tracking_at_element = -1
        elif isinstance(ele_start, str):
            kwargs['ele_start'] = int(line.element_names.index(ele_start))
        if kwargs['ele_start'] < 0 or not isinstance(kwargs['ele_start'], int) \
        or kwargs['ele_start'] >= num_elements:
            raise ValueError(f"Invalid value {kwargs['ele_start']} for `ele_start`!")

        # Get the end element
        ele_stop = kwargs.setdefault('ele_stop', -1)
        if isinstance(ele_stop, str):
            kwargs['ele_stop'] = int(line.element_names.index(ele_stop))
        if kwargs['ele_stop'] < -1 or not isinstance(kwargs['ele_stop'], int) \
        or kwargs['ele_stop'] >= num_elements:
            raise ValueError(f"Invalid value {kwargs['ele_stop']} for `ele_stop`!")

        # If the ele_stop comes before the ele_start, we need at least two turns
        if kwargs['ele_stop'] <= kwargs['ele_start'] and kwargs['num_turns'] < 2:
            kwargs['num_turns'] = 2

        # Call xo.Struct constructor
        super().__init__(**kwargs)

        # Assign the line metadata
        self.line_metadata = _build_line_metadata(line, _buffer=self._buffer,
                                                  store_element_names=store_element_names)
        self._num_elements = num_elements
        _shrink(self._buffer)


    @classmethod
    def from_binary(cls, filename, offset=0, raise_version_error=True):
        """
        Create an XbInput from a binary file. The file should not
        contain anything else (otherwise the offset will be wrong).
    
        Parameters
        ----------
        filename : pathlib.Path
            The binary containing the simulation state.
    
        Returns
        -------
        XbInput
        """

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
        """
        Dump the XbInput to a binary file.
    
        Parameters
        ----------
        filename : pathlib.Path
            The binary containing the simulation state.
    
        Returns
        -------
        None.
        """
        _shrink(self._buffer)
        assert self._offset == 0
        filename = Path(filename).expanduser().resolve()
        with filename.open('wb') as fid:
            fid.write(self._buffer.buffer.tobytes())


    @property
    def version(self):
        return self._version

    @property
    def line(self):
        elements = [el._DressingClass(_xobject=el) for el in self.line_metadata.elements]
        names = self.line_metadata.names
        if len(names) == 0:
            n = len(elements)
            digits = int(np.ceil(np.log10(n)))
            names = [f"el_{i:>0{digits}}" for i in range(n)]
        return xt.Line(elements=elements, element_names=names)

    @line.setter
    def line(self, val):
        # Only works as long as line_metadata is an xo.Ref, but we try to avoid this
        raise NotImplementedError

    @property
    def particles(self):
        return self.xb_state.particles


def _build_line_metadata(line, _buffer=None, store_element_names=True):
    # Create the ElementRefData from a given line
    line_id = id(line)
    # TODO: caching currently doesn't work
    _previous_line_cache = {}
    if line_id not in _previous_line_cache:
        _check_config(line)
        _check_compatible_elements(line)
        if _buffer is None:
            _buffer = _xboinc_context.new_buffer()
        names = list(line.element_names) if store_element_names else []
        element_ref_data = ElementRefData(
            elements=len(line.element_names),
            names=names,
            _buffer=_buffer,
        )
        element_ref_data.elements = [
            line.element_dict[name]._xobject for name in line.element_names
        ]
        _previous_line_cache[line_id] = element_ref_data

    return _previous_line_cache[line_id]

def _check_config(line):
    # Check that the present config is on Xboinc
    default_config_hash = get_default_config()
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
    # Check that all elements are supported by Xboinc
    default_elements = [d.__name__ for d in default_element_classes]
    for ee in np.unique([ee.__class__.__name__ for ee in line.elements]):
        if ee not in default_elements:
            raise ValueError(f"Element of type {ee} not supported "
                           + f"in this version of xboinc!")


def _shrink(buffer):
    # Shrink a buffer by removing all free capacity
    if buffer.get_free() > 0:
        new_capacity = buffer.capacity - buffer.get_free()
        newbuff = buffer._new_buffer(new_capacity)
        buffer.copy_to_native(
                dest=newbuff, dest_offset=0, source_offset=0, nbytes=new_capacity
            )
        buffer.buffer = newbuff
        buffer.capacity = new_capacity
        buffer.chunks = []
