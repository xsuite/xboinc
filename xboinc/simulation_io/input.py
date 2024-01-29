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

import sys
import numpy as np
from pathlib import Path

import xobjects as xo
import xpart as xp
import xtrack as xt

from .version import SimVersion, assert_versions
from .default_tracker import default_element_classes, get_default_tracker
from .output import SimState

# TODO: how to make input file smaller??

# The build time of the input file is largely dominated by the rebuilding of the
# tracker. For this reason we cache the line, such that when submitting many jobs
# on the same line only the first job creation takes some time.
#
# Note that this advantage is lost when changing lines at every job, in other
# words, one should be smart in organising the order of jobs to have a speedy
# submission.
_previous_line_cache = {}


class ElementRefData(xo.Struct):
    # Stub; this is defined inside Tracker
    pass


class SimConfig(xo.Struct):
    _version         = SimVersion    # This HAS to be the first field!
    line_metadata    = xo.Ref(ElementRefData)
    num_turns        = xo.Int64
    num_elements     = xo.Int64
    checkpoint_every = xo.Int64
    sim_state        = xo.Ref(SimState)

    def __init__(self, *args, **kwargs):
        assert_versions()
        if '_xobject' not in kwargs:
            kwargs['_version'] = SimVersion()
            kwargs.setdefault('_buffer', xo.ContextCpu().new_buffer())
            kwargs.setdefault('checkpoint_every', -1)
            line = kwargs.pop('line', None)
            if kwargs.pop('line_metada', None) is not None:
                raise ValueError("Cannot initialise SimConfig with `line_metadata` "
                               + "as it would scramble the order of the buffer!")
            particles = kwargs.pop('particles', None)
            if kwargs.pop('sim_state', None) is not None:
                raise ValueError("Cannot initialise SimConfig with `sim_state` "
                               + "as it would scramble the order of the buffer!")
        super().__init__(**kwargs)
        # We have to initialise the dynamic fields after the xobject is created, to
        # ensure that they are stored at the end of the buffer (such that the buffer
        # starts with the SimConfig itself)
        if '_xobject' not in kwargs:
            if line is not None:
                self.line_metadata = _build_line_metadata(line, self._buffer)
                self.num_elements = len(line.element_names)
            if particles is not None:
                self.sim_state = _build_sim_state(particles, self._buffer)

    @classmethod
    def from_binary(cls, filename, offset=0, raise_version_error=True):
        # Read binary
        filename = Path(filename)
        with filename.open('rb') as fid:
            state_bytes = fid.read()
        buffer_data = xo.ContextCpu().new_buffer(capacity=len(state_bytes))
        buffer_data.buffer[:] = np.frombuffer(state_bytes, dtype=np.int8)
        # Cast to SimVersion to verify versions of xsuite packages
        version_offset = -1
        for field in cls._fields:
            if field.name == '_version':
                version_offset = field.offset
        if version_offset == -1:
            raise ValueError("No xofield `_version` found in SimConfig!")
        sim_ver = SimVersion._from_buffer(buffer=buffer_data, offset=offset+version_offset)
        if not sim_ver.assert_version(raise_error=raise_version_error, filename=filename):
            return None
        # Retrieve simulation input
        return cls._from_buffer(buffer=buffer_data, offset=offset)

    def to_binary(self, filename):
        assert self._offset == 0
        assert self._fields[0].offset == 0
        filename = Path(filename).expanduser().resolve()
        with filename.open('wb') as fid:
            fid.write(self._buffer.buffer.tobytes())


    @property
    def version(self):
        return self._version

    @property
    def line(self):
        return self.line_metadata  # TODO: make readable

    @line.setter
    def line(self, val):
        self.line_metadata = _build_line_metadata(val, self._buffer)
        self.num_elements = len(line.element_names)

    @property
    def particles(self):
        return self.sim_state.particles

    @particles.setter
    def particles(self, val):
        self.sim_state = _build_sim_state(val, self._buffer)


    # @classmethod
    # def build(cls, *, num_turns, line, particles, checkpoint_every=-1, filename=None):
    #     # Assemble data structure
    #     sim_config = cls()
    #     simbuf = sim_config._buffer

    #     # Create SimConfig metadata
    #     sim_config.line_metadata = _build_line_metadata(line, simbuf)
    #     sim_config.num_turns = num_turns
    #     sim_config.num_elements = len(line.element_names)   # THIS THIS THIS
    #     sim_config.checkpoint_every = checkpoint_every
    #     sim_state = SimState(particles=particles, _i_turn=0, _buffer=simbuf)
    #     sim_config.sim_state = sim_state._xobject
    #     sim_state._xsize = sim_state._xobject._size # store size of sim_state TODO: in init of SimState
    #     assert sim_config._offset == 0
    #     assert sim_config._fields[0].offset == 0

    #     # Write sim buffer to file
    #     if filename is not None:
    #         filename = Path(filename).expanduser().resolve()
    #         with filename.open('wb') as fid:
    #             fid.write(simbuf.buffer.tobytes())

    #     return sim_config


def _build_sim_state(particles, buffer):
    sim_state = SimState(particles=particles, _i_turn=0, _buffer=buffer)
    return sim_state._xobject


def _build_line_metadata(line, buffer):
    # Default tracker (cached, only compiles the first time)
    default_tracker, default_config_hash = get_default_tracker()
    # Verify compatibility and rebuild tracker with full kernel
    if 'line' not in _previous_line_cache\
    or _previous_line_cache['line'] != line.tracker:
        _check_compatible_elements(line)
        _rebuild_tracker(line, buffer)
        _previous_line_cache['line'] = line.tracker
    # Get the ElementRefData
    tracker_data = line.tracker._tracker_data_cache[default_config_hash]
    return tracker_data._element_ref_data

def _check_compatible_elements(line):
    default_elements = [d.__name__ for d in default_element_classes]
    for ee in np.unique([ee.__class__.__name__ for ee in line.elements]):
        if ee not in default_elements:
            raise ValueError(f"Element of type {ee} not supported "
                           + f"in this version of xboinc!")

def _rebuild_tracker(line, buffer):
    default_tracker, default_config_hash = get_default_tracker()
    line.discard_tracker()
    line.build_tracker(_context=buffer.context, _buffer=buffer,
                       track_kernel=default_tracker.track_kernel)
    if default_config_hash not in line.tracker._tracker_data_cache:
        raise RuntimeError('Tracker data for default config not found')
    

