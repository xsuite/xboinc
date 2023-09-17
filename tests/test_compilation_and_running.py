# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #

import subprocess
import json
import numpy as np
from pathlib import Path
import os
import time
import filecmp

import xtrack as xt
import xcoll as xc
import xboinc as xb


line_file = xc._pkg_root.parent / 'tests' / 'data' / 'sequence_lhc_run3_b1.json'
num_turns = 1000


def test_compilation():
    source_files = xb.generate_executable_source()
    assert Path(Path.cwd() / "main.c").exists()
    assert Path(Path.cwd() / "sim_config.h").exists()
    assert Path(Path.cwd() / "xtrack_tracker.h").exists()
    
    xb.generate_executable()
    exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    assert len(exec_file) == 1
    assert exec_file[0].exists()
    assert os.access(exec_file[0], os.X_OK)


def test_generate_input():
    # Simulation input
    line = xt.Line.from_json(line_file)
    line.build_tracker()
    x_norm = np.linspace(-.5, .5, 50)
    delta = np.linspace(-1.e-5, 1.e-5, 50)
    part = line.build_particles(x_norm=x_norm, delta=delta, nemitt_x=3.5e-6, nemitt_y=3.5e-6)

    # Assemble data structure
    xb.SimConfig.build(line=line, particles=part, num_turns=num_turns, checkpoint_every=10,
                        filename='xboinc_input.bin')

    input_file = Path.cwd() / "xboinc_input.bin"
    assert input_file.exists()


def test_track():
    # If no executable is present, make one
    exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    if len(exec_file)==0 or not exec_file[0].exists():
        xb.generate_executable()
    exec_file = exec_file[0]

    # If no input file is present, make one
    input_file = Path.cwd() / 'xboinc_input.bin'
    if not input_file.exists():
        test_generate_input()

    # run xboinc tracker
    t1 = time.time()
    cmd = subprocess.run([exec_file])
    print(round(time.time() - t1, 1))
    if cmd.returncode != 0:
        raise RuntimeError(f"Tracking failed.")

    # Read output
    output_file = Path.cwd() / 'sim_state_out.bin'
    assert output_file.exists()
    sim_state = xb.SimState.from_binary(output_file)

    # Look at particles state
    part_xboinc = sim_state.particles
    assert np.allclose(part_xboinc.s, 0, rtol=1e-6, atol=0), "Unexpected s"
    assert np.all(part_xboinc.at_turn == num_turns), "Unexpected survivals (particles)"
    assert sim_state.i_turn == num_turns, "Unexpecteds survival (sim_state)"

    # Rename file for comparison in next test
    output_file.rename(output_file.parent / f'{output_file.name}_2')


def test_checkpoint():
    # If no executable is present, make one
    exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    if len(exec_file)==0 or not exec_file[0].exists():
        xb.generate_executable()
    exec_file = exec_file[0]

    # If no input file is present, make one
    input_file = Path.cwd() / 'xboinc_input.bin'
    if not input_file.exists():
        test_generate_input()

    # If previous output file not present, we need to regenerate it (to be able to compare)
    output_file = Path.cwd() / 'sim_state_out.bin_2'
    if not output_file.exists():
        test_track()

    # run xboinc tracker and interrupt halfway
    interrupted = False
    timeout = 25
    print(f"Will interrupt after {timeout}s.")
    try:
        cmd = subprocess.run(exec_file, timeout=timeout)
    except subprocess.TimeoutExpired:
        interrupted = True
        print("Interrupted calculation. Now trying to continue.")
        checkpoint_file = Path.cwd() / 'checkpoint.bin'
        assert checkpoint_file.exists()
    if not interrupted:
        raise ValueError("Timeout was too short. Adapt the test 'test_checkpoint'.")

    # Now continue tracking (without timeout)
    cmd = subprocess.run(exec_file)
    if cmd.returncode != 0:
        raise RuntimeError(f"Tracking failed.")

    # Compare file to previous result
    output_file = Path.cwd() / 'sim_state_out.bin'
    assert output_file.exists()
    assert filecmp.cmp(output_file, output_file.parent / f'{output_file.name}_2', shallow=False)


def test_vs_xtrack():
    # If no output is present, make one
    output_file = Path.cwd() / 'sim_state_out.bin'
    if not output_file.exists():
        test_track()
    sim_state = xb.SimState.from_binary(output_file)
    part_xboinc = sim_state.particles
    
    # Testing results with xtrack
    line = xt.Line.from_json(line_file)
    line.build_tracker()
    x_norm = np.linspace(-.5, .5, 50)
    delta = np.linspace(-1.e-5, 1.e-5, 50)
    part = line.build_particles(x_norm=x_norm, delta=delta, nemitt_x=3.5e-6, nemitt_y=3.5e-6)
    line.track(part, num_turns=num_turns)

    assert np.array_equal(part.at_turn, part_xboinc.at_turn), "Fail to match xtrack: survivals are not equal"
    assert np.array_equal(part.x, part_xboinc.x),             "Fail to match xtrack: x are not equal"
    assert np.array_equal(part.y, part_xboinc.y),             "Fail to match xtrack: y are not equal"
    assert np.array_equal(part.zeta, part_xboinc.zeta),       "Fail to match xtrack: zeta are not equal"
    assert np.array_equal(part.px, part_xboinc.px),           "Fail to match xtrack: px are not equal"
    assert np.array_equal(part.py, part_xboinc.py),           "Fail to match xtrack: py are not equal"
    assert np.array_equal(part.delta, part_xboinc.delta),     "Fail to match xtrack: delta are not equal"


def test_clean():
    input_files  = list(Path.cwd().glob('xboinc_input.bin*'))
    output_files = list(Path.cwd().glob('sim_state_out.bin*'))
    exec_files   = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    for file in [*input_files, *output_files, *exec_files]:
        if file.exists():
            file.unlink()
