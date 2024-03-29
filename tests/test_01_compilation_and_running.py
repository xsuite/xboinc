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


line_file = xb._pkg_root.parent / 'tests' / 'data' / 'sequence_lhc_run3_b1.json'
num_turns = 1000
input_filename      = 'xboinc_input.bin'
output_filename     = 'sim_state_out.bin'
checkpoint_filename = 'checkpoint.bin'


def test_compilation():
    xb._skip_xsuite_version_check = True
    source_files = xb.generate_executable_source()
    assert Path(Path.cwd() / "main.c").exists()
    assert Path(Path.cwd() / "sim_config.h").exists()
    assert Path(Path.cwd() / "xtrack_tracker.h").exists()
    
    xb.generate_executable()
    exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    assert len(exec_file) == 1
    assert exec_file[0].exists()
    assert os.access(exec_file[0], os.X_OK)
    xb._skip_xsuite_version_check = False


def _make_input():
    line = xt.Line.from_json(line_file)
    line.build_tracker()
    x_norm = np.linspace(-.5, .5, 50)
    delta = np.linspace(-1.e-5, 1.e-5, 50)
    part = line.build_particles(x_norm=x_norm, delta=delta, nemitt_x=3.5e-6, nemitt_y=3.5e-6)
    return line, part


def test_generate_input():
    xb._skip_xsuite_version_check = True
    line, part = _make_input()
    xb.SimConfig.build(line=line, particles=part, num_turns=num_turns, checkpoint_every=10,
                        filename=input_filename)
    input_file = Path.cwd() / input_filename
    assert input_file.exists()
    xb._skip_xsuite_version_check = False


def test_track(request):
    xb._skip_xsuite_version_check = True
    # If no executable is present, make one
    exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    if len(exec_file)==0 or not exec_file[0].exists():
        test_compilation()
        exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    exec_file = exec_file[0]

    # If no input file is present, make one
    input_file = Path.cwd() / input_filename
    if not input_file.exists():
        test_generate_input()

    # run xboinc tracker
    t1 = time.time()
    cmd = subprocess.run([exec_file])
    calculation_time = round(time.time() - t1, 1)
    request.config.cache.set('calculation_time', calculation_time)
    if cmd.returncode != 0:
        raise RuntimeError(f"Tracking failed.")
    else:
        print(f"Tracking done in {calculation_time}s.")

    # Read output
    output_file = Path.cwd() / output_filename
    assert output_file.exists()
    sim_state = xb.SimState.from_binary(output_file)

    # Look at particles state
    part_xboinc = sim_state.particles
    assert np.allclose(part_xboinc.s, 0, rtol=1e-6, atol=0), "Unexpected s"
    assert np.all(part_xboinc.at_turn == num_turns), "Unexpected survivals (particles)"
    assert sim_state.i_turn == num_turns, "Unexpecteds survival (sim_state)"

    # Check that the tracking made sense, i.e. that not all values are the same
    assert not np.allclose(part_xboinc.x,  part_xboinc.x[0],  rtol=1e-4, atol=0)
    assert not np.allclose(part_xboinc.px, part_xboinc.px[0], rtol=1e-4, atol=0)
    assert not np.allclose(part_xboinc.y,  part_xboinc.y[0],  rtol=1e-4, atol=0)
    assert not np.allclose(part_xboinc.py, part_xboinc.py[0], rtol=1e-4, atol=0)

    # Rename file for comparison in next test
    output_file.rename(output_file.parent / f"{output_filename}_2")
    xb._skip_xsuite_version_check = False


def test_checkpoint(request):
    xb._skip_xsuite_version_check = True
    # If no executable is present, make one
    exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    if len(exec_file)==0 or not exec_file[0].exists():
        test_compilation()
        exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    exec_file = exec_file[0]

    # If no input file is present, make one
    input_file = Path.cwd() / input_filename
    if not input_file.exists():
        test_generate_input()

    # If previous output file not present, we need to regenerate it (to be able to compare)
    output_file = Path.cwd() / f"{output_filename}_2"
    if not output_file.exists():
        test_track()

    # run xboinc tracker and interrupt halfway
    interrupted = False
    timeout = 0.6*request.config.cache.get('calculation_time', 25)
    print(f"Will interrupt after {timeout}s.")
    t1 = time.time()
    calculation_time = round(time.time() - t1, 1)
    try:
        cmd = subprocess.run(exec_file, timeout=timeout)
    except subprocess.TimeoutExpired:
        interrupted = True
        t2 = time.time()
        print(f"Interrupted calculation after {round(t2 - t1, 1)}s. Now trying to continue.")
        checkpoint_file = Path.cwd() / checkpoint_filename
        assert checkpoint_file.exists()
    if not interrupted:
        raise ValueError("Timeout was too short. Adapt the test 'test_checkpoint'.")

    # Now continue tracking (without timeout)
    cmd = subprocess.run(exec_file)
    if cmd.returncode != 0:
        raise RuntimeError(f"Tracking failed.")
    else:
        t3 = time.time()
        print(f"Continued tracking done in {round(t3 - t2, 1)}s (total tracking time {round(t3 - t1, 1)}s).")

    # Compare file to previous result
    output_file = Path.cwd() / output_filename
    assert output_file.exists()
    assert filecmp.cmp(output_file, output_file.parent / f"{output_file.name}_2", shallow=False)
    xb._skip_xsuite_version_check = False


def test_vs_xtrack():
    xb._skip_xsuite_version_check = True
    # If no output is present, make one
    output_file = Path.cwd() / f"{output_filename}_2"
    if not output_file.exists():
        test_track()
    sim_state = xb.SimState.from_binary(output_file)
    part_xboinc = sim_state.particles
    
    # Testing results with xtrack
    line, part = _make_input()
    line.track(part, num_turns=num_turns)

    assert np.array_equal(part.at_turn, part_xboinc.at_turn), "Fail to match xtrack: survivals are not equal"
    assert np.array_equal(part.x, part_xboinc.x),             "Fail to match xtrack: x are not equal"
    assert np.array_equal(part.y, part_xboinc.y),             "Fail to match xtrack: y are not equal"
    assert np.array_equal(part.zeta, part_xboinc.zeta),       "Fail to match xtrack: zeta are not equal"
    assert np.array_equal(part.px, part_xboinc.px),           "Fail to match xtrack: px are not equal"
    assert np.array_equal(part.py, part_xboinc.py),           "Fail to match xtrack: py are not equal"
    assert np.array_equal(part.delta, part_xboinc.delta),     "Fail to match xtrack: delta are not equal"
    xb._skip_xsuite_version_check = False
