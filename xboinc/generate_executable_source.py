import xobjects as xo
from .default_tracker import get_default_tracker
from .sim_data import LineMetaData, SimState, SimConfig
from .general import _pkg_root

def generate_executable_source(write_source_files=True,
                                       _context=None):

    assert _context is None
    assert write_source_files

    sim_config_sources = [
        xo.specialize_source(LineMetaData._gen_c_api(),
                                    specialize_for='cpu_serial'),
        xo.specialize_source(SimState._gen_c_api(),
                                    specialize_for='cpu_serial'),
        xo.specialize_source(SimConfig._gen_c_api(),
                                    specialize_for='cpu_serial'),
    ]

    sim_config_h = '\n'.join(sim_config_sources)

    default_tracker = get_default_tracker()
    xtrack_tracker_h = default_tracker.track_kernel.specialized_source

    with open(_pkg_root.joinpath('executable_src/main.c'), 'r') as fid:
        main_c = fid.read()

    dct_sources = {
        'sim_config.h': sim_config_h,
        'xtrack_tracker.h': xtrack_tracker_h,
        'main.c': main_c,
    }

    for nn, vv in dct_sources.items():
        with open(nn, 'w') as fid:
            fid.write(vv)

    return dct_sources

