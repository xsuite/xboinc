# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

import numpy as np

import xobjects as xo
import xpart as xp
import xtrack as xt

from ..default_tracker import get_default_tracker
from .simulation_state import SimState

_default_tracker, _default_config_hash = get_default_tracker()


class SimConfig(xo.Struct):
    tracker_data     = _default_tracker._tracker_data_cache[_default_config_hash]
    line_metadata    = xo.Ref(tracker_data._element_ref_data.__class__)
    num_turns        = xo.Int64
    num_elements     = xo.Int64
    checkpoint_every = xo.Int64
    sim_state        = xo.Ref(SimState)


def build_input_file(name, num_turns, line, particles, checkpoint_every=-1):
    # Assemble data structure
    simbuf = xo.ContextCpu().new_buffer()
    sim_config = SimConfig(_buffer=simbuf)
    default_tracker = _default_tracker
    # TODO: need check if incompatible elements in line or so?
    # TODO: need to version tracker -> xboinc executable versions
    line.build_tracker(_context=simbuf.context, _buffer=simbuf,
                        track_kernel=default_tracker.track_kernel)
    if _default_config_hash not in line.tracker._tracker_data_cache:
        raise RuntimeError('Tracker data for default config not found')
    tracker_data = line.tracker._tracker_data_cache[_default_config_hash]
    version, part = get_boinc_particles_from_particles(particles)
    sim_state = build_simulation_state(version=version, _buffer=simbuf,
                                     particles=part, i_turn=0)
    sim_config.line_metadata = tracker_data._element_ref_data
    sim_config.num_turns = num_turns
    sim_config.num_elements = len(line.element_names)
    sim_config.checkpoint_every = checkpoint_every
    sim_config.sim_state = sim_state._xobject
    sim_state.size = sim_state._xobject._size # store size of sim_state
    assert sim_config._offset == 0
    assert sim_config._fields[0].offset == 0
    # Write sim buffer to file
    with open(name, 'wb') as fid:
        fid.write(simbuf.buffer.tobytes())
    return sim_config