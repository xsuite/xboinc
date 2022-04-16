import xobjects as xo
import xpart as xp

class LineMetaData(xo.Struct):
    ele_offsets = xo.Int64[:]
    ele_typeids = xo.Int64[:]

class SimState(xo.Struct):
    particles = xp.Particles.XoStruct
    i_turn = xo.Int64
    size = xo.Int64

class SimConfig(xo.Struct):
    buffer_size = xo.Int64
    line_metadata = xo.Ref(LineMetaData)
    num_turns = xo.Int64
    sim_state = xo.Ref(SimState)