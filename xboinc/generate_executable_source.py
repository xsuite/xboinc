import xobjects as xo
from .default_tracker import get_default_tracker
from .sim_data import LineMetaData, SimState, SimConfig

def generate_executable_source(write_soutce_files=True,
                                       _context=None):

    assert _context is None

    # Generate C executable
    sim_config_sources = [
        xo.specialize_source(LineMetaData._gen_c_api(),
                                    specialize_for='cpu_serial'),
        xo.specialize_source(SimState._gen_c_api(),
                                    specialize_for='cpu_serial'),
        xo.specialize_source(SimConfig._gen_c_api(),
                                    specialize_for='cpu_serial'),
    ]

    sim_config_h = '\n'.join(sim_config_sources)

    #default_tracker = get_default_tracker()
    #with open('xtrack.h', 'w') as fid:
    #    fid.write(_master_tracker.track_kernel.specialized_source)

    dct_sources = {
        'simconfig.h': sim_config_h,
    }

    for nn, vv in dct_sources.items():
        with open(nn, 'w') as fid:
            fid.write(vv)

    return dct_sources

