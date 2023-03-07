import numpy as np

import xobjects as xo
import xpart as xp
import xtrack as xt

from .default_tracker import get_default_tracker

_default_tracker = get_default_tracker()


class SimState(xo.HybridClass):
    _xofields = {
        'particles': xp.Particles._XoStruct,
        'i_turn': xo.Int64,
        'size': xo.Int64,
    }


class SimConfig(xo.Struct):
    line_metadata = xo.Ref(_default_tracker._tracker_data._element_ref_data.__class__)
    num_turns = xo.Int64
    num_elements = xo.Int64
    checkpoint_every = xo.Int64
    sim_state = xo.Ref(SimState._XoStruct)


def build_input_file(name, num_turns, line, particles, checkpoint_every=-1):
    # Assemble data structure
    simbuf = xo.ContextCpu().new_buffer()
    sim_config = SimConfig(_buffer=simbuf)
    default_tracker = _default_tracker
    tracker = xt.Tracker(line=line, _buffer=simbuf,
                        track_kernel=default_tracker.track_kernel,
                        element_classes=default_tracker.element_classes)
    sim_state = SimState(_buffer=simbuf, particles=particles, i_turn=0)
    sim_config.line_metadata = tracker._tracker_data._element_ref_data
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


def read_output_file(filename):
    with open(filename, 'rb') as fid:
        state_bytes = fid.read()
    buffer_out = xo.ContextCpu().new_buffer(capacity=len(state_bytes))
    buffer_out.buffer[:] = np.frombuffer(state_bytes, dtype=np.int8)
    sim_state_xobject = SimState._XoStruct._from_buffer(buffer=buffer_out, offset=0)
    sim_state_out = SimState(_xobject=sim_state_xobject)
    return sim_state_out
