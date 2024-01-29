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

from pathlib import Path
import numpy as np

import xobjects as xo
import xpart as xp

from .version import SimVersion, assert_versions


class SimState(xo.HybridClass):
    _xofields = {
        '_version':  SimVersion,    # This HAS to be the first field!
        '_i_turn':   xo.Int64,      # Current turn in tracking (not necessarily the same as particles.at_turn)
        '_xsize':     xo.Int64,
        'particles': xp.Particles,
    }


    def __init__(self, **kwargs):
        assert_versions()
        if '_xobject' not in kwargs:
            kwargs['_version'] = SimVersion()
            # particles = kwargs.pop('particles', None)
        super().__init__(**kwargs)
        # We have to initialise the dynamic fields after the xobject is created, to
        # ensure that they are stored at the end of the buffer (such that the buffer
        # starts with the SimConfig itself)
        # if '_xobject' not in kwargs:
        #     if particles is not None:
        #         self.particles = particles
        self._xsize = self._xobject._size


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
        for field in cls._XoStruct._fields:
            if field.name == '_version':
                version_offset = field.offset
        if version_offset == -1:
            raise ValueError("No xofield `_version` found in SimState!")
        sim_ver = SimVersion._from_buffer(buffer=buffer_data, offset=offset+version_offset)
        if not sim_ver.assert_version(raise_error=raise_version_error, filename=filename):
            return None
        # Retrieve simulation state
        sim_state_xobject = cls._XoStruct._from_buffer(buffer=buffer_data, offset=offset)
        return cls(_xobject=sim_state_xobject)

    def to_binary(self, filename):
        assert self._offset == 0
        assert self._XoStruct._fields[0].offset == 0
        filename = Path(filename).expanduser().resolve()
        with filename.open('wb') as fid:
            fid.write(self._buffer.buffer.tobytes())

    @property
    def version(self):
        return self._version

