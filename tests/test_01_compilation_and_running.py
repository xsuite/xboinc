# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2024.                 #
########################################### #

import subprocess
import numpy as np
from pathlib import Path
import os
import time
import filecmp
import pytest

import xtrack as xt
import xboinc as xb


line_file = xb._pkg_root.parent / 'tests' / 'data' / 'lhc_2024_30cm_b1.json'
num_turns = 1000
num_part  = 100
ele_start = 'tcp.c6l7.b1'
ele_stop  = 'tctph.4l2.b1'

input_filename      = 'xboinc_input.bin'
output_filename     = 'xboinc_state_out.bin'
checkpoint_filename = 'checkpoint.bin'

boinc_path = xb._pkg_root.parents[1] / "boinc"
boinc_api = boinc_path / 'api' / 'libboinc_api.a'
boinc_lib = boinc_path / 'lib' / 'libboinc.a'
boinc_missing = not boinc_path.is_dir() or not boinc_path.exists() \
             or not boinc_api.exists()  or not boinc_lib.exists()


def _make_input():
    line = xt.Line.from_json(line_file)
    line.build_tracker()
    x_norm = np.linspace(-10, 10, num_part)
    delta = np.linspace(-1.e-5, 1.e-5, num_part)
    part = line.build_particles(x_norm=x_norm, delta=delta, at_element=ele_start, \
                                nemitt_x=3.5e-6, nemitt_y=3.5e-6)
    return line, part

def test_generate_input():
    xb._skip_xsuite_version_check = True
    line, part = _make_input()
    input_file = Path.cwd() / input_filename
    input = xb.XbInput(line=line, particles=part, num_turns=num_turns, \
                       ele_stop=ele_stop, checkpoint_every=50)
    with pytest.raises(ValueError):
        _ = xb.XbInput(line=line, particles=part, ele_start=10)

    at_turn = np.unique(input.particles.at_turn)
    assert len(at_turn) == 1
    assert at_turn[0] == input.xb_state._i_turn
    at_element = np.unique(input.particles.at_element)
    assert len(at_element) == 1
    assert at_element[0] == line.element_names.index(ele_start)
    assert at_element[0] == input.ele_start
    assert input.ele_stop == line.element_names.index(ele_stop)

    # Verify that the line and particles are correct
    part_dict_1 = part.to_dict()
    part_dict_2 = input.particles.to_dict()
    part_dict_1.pop('start_tracking_at_element')
    part_dict_2.pop('start_tracking_at_element')
    assert xt.line._dicts_equal(part_dict_1, part_dict_2)
    assert list(line.element_names) == list(input.line.element_names)
    line_dict_1 = line.to_dict()
    line_dict_2 = input.line.to_dict()
    assert xt.line._dicts_equal(line_dict_1['elements'], line_dict_2['elements'])

    # Dump to file
    input.to_binary(input_file)
    assert input_file.exists()

    # Test round-trip by loading the file back in
    new_input = xb.XbInput.from_binary(input_file)
    part_dict_3 = new_input.particles.to_dict()
    part_dict_3.pop('start_tracking_at_element')
    assert xt.line._dicts_equal(part_dict_1, part_dict_3)
    assert list(line.element_names) == list(new_input.line.element_names)
    line_dict_3 = new_input.line.to_dict()
    assert xt.line._dicts_equal(line_dict_1['elements'], line_dict_3['elements'])
    xb._skip_xsuite_version_check = False

def _get_input():
    input_file = Path.cwd() / input_filename
    if not input_file.exists():
        test_generate_input()


def test_source():
    xb._skip_xsuite_version_check = True
    xb.generate_executable_source()
    assert Path(Path.cwd() / "main.c").exists()
    assert Path(Path.cwd() / "Makefile").exists()
    assert Path(Path.cwd() / "xtrack.c").exists()
    assert Path(Path.cwd() / "xtrack.h").exists()
    assert Path(Path.cwd() / "xb_input.h").exists()
    assert Path(Path.cwd() / "xtrack_tracker.h").exists()
    xb._skip_xsuite_version_check = False


@pytest.mark.parametrize("boinc", [None, 
    pytest.param(boinc_path, marks=pytest.mark.skipif(boinc_missing, reason="BOINC installation not found")
)], ids=["w/o BOINC api", "with BOINC api"])
def test_compilation(boinc):
    xb._skip_xsuite_version_check = True
    keep_source = True if boinc is None else False
    xb.generate_executable(keep_source=keep_source, boinc_path=boinc)
    app = 'xboinc_test' if boinc is None else 'xboinc'
    exec_file = list(Path.cwd().glob(f'{app}_{xb.app_version}-*'))
    assert len(exec_file) == 1
    assert exec_file[0].exists()
    assert os.access(exec_file[0], os.X_OK)
    xb._skip_xsuite_version_check = False

def _get_exec(boinc):
    app = 'xboinc_test' if boinc is None else 'xboinc'
    exec_file = list(Path.cwd().glob(f'{app}_{xb.app_version}-*'))
    if len(exec_file)==0 or not exec_file[0].exists():
        test_compilation(boinc)
    exec_file = list(Path.cwd().glob(f'{app}_{xb.app_version}-*'))
    return exec_file[0]


@pytest.mark.parametrize("boinc", [None, 
    pytest.param(boinc_path, marks=pytest.mark.skipif(boinc_missing, reason="BOINC installation not found")
)], ids=["w/o BOINC api", "with BOINC api"])
def test_track(boinc):
    xb._skip_xsuite_version_check = True
    exec_file = _get_exec(boinc)
    line, _ = _make_input()
    _get_input()

    # run xboinc tracker
    t1 = time.time()
    cmd = subprocess.run([exec_file, '--verbose', '1'])
    calculation_time = round(time.time() - t1, 1)
    # request.config.cache.set('calculation_time', calculation_time)
    if cmd.returncode != 0:
        raise RuntimeError(f"Tracking failed:\n{stdout}{stderr}")
    else:
        app = 'Xboinc Test' if boinc is None else 'Xboinc'
        print(f"Tracking ({app}) done in {calculation_time}s.")

    # Read output
    output_file = Path.cwd() / output_filename
    assert output_file.exists()
    xb_state = xb.XbState.from_binary(output_file)

    # Look at particles state
    part_xboinc = xb_state.particles
    print(f"{len(part_xboinc.state[part_xboinc.state > 0])}/{num_part} survived.")
    at_element = np.unique(part_xboinc.at_element[part_xboinc.state > 0])
    assert len(at_element) == 1
    assert at_element[0] == line.element_names.index(ele_stop)
    assert np.allclose(part_xboinc.s[part_xboinc.state > 0], 0, rtol=1e-6, atol=0), "Unexpected s"
    assert np.all(part_xboinc.at_turn[part_xboinc.state > 0] == num_turns-1), "Unexpected survivals (particles)"
    assert xb_state.i_turn == num_turns-1, "Unexpected survival (xb_state)"

    # Check that the tracking made sense, i.e. that not all values are the same
    assert not np.allclose(part_xboinc.x,  part_xboinc.x[0],  rtol=1e-4, atol=0)
    assert not np.allclose(part_xboinc.px, part_xboinc.px[0], rtol=1e-4, atol=0)
    assert not np.allclose(part_xboinc.y,  part_xboinc.y[0],  rtol=1e-4, atol=0)
    assert not np.allclose(part_xboinc.py, part_xboinc.py[0], rtol=1e-4, atol=0)

    # Test round-trip by dumping the file again
    output_file_2 = Path.cwd() / f"{output_filename}{'' if boinc is None else '_boinc'}_2"
    xb_state.to_binary(output_file_2)
    filecmp.cmp(output_file, output_file_2, shallow=False)
    xb._skip_xsuite_version_check = False
    if (Path.cwd() / checkpoint_filename).exists():
        (Path.cwd() / checkpoint_filename).unlink()

def _get_output(boinc):
    output_file_2 = Path.cwd() / f"{output_filename}{'' if boinc is None else '_boinc'}_2"
    if not output_file_2.exists():
        test_track(boinc)
    return output_file_2


@pytest.mark.parametrize("boinc", [None, 
    pytest.param(boinc_path, marks=pytest.mark.skipif(boinc_missing, reason="BOINC installation not found")
)], ids=["w/o BOINC api", "with BOINC api"])
def test_checkpoint(boinc):
    xb._skip_xsuite_version_check = True
    exec_file = _get_exec(boinc)
    _get_input()
    output_file_2 = _get_output(boinc)

    # run xboinc tracker and interrupt halfway
    interrupted = False
    # timeout = 0.6*request.config.cache.get('calculation_time', 15)
    timeout = 15
    print(f"Will interrupt after {timeout}s.")
    t1 = time.time()
    try:
        cmd = subprocess.run([exec_file, '--verbose', '1'], timeout=timeout)
    except subprocess.TimeoutExpired:
        t2 = time.time()
        interrupted = True
        checkpoint_file = Path.cwd() / checkpoint_filename
        assert checkpoint_file.exists()
        print(f"Interrupted calculation after {round(t2 - t1, 1)}s. Now trying to continue.")
    if not interrupted:
        raise ValueError("Timeout was too short. Adapt the test 'test_checkpoint'.")

    # Now continue tracking (without timeout)
    cmd = subprocess.run([exec_file, '--verbose', '1'])
    if cmd.returncode != 0:
        raise RuntimeError(f"Tracking failed.")
    else:
        t3 = time.time()
        app = 'Xboinc Test' if boinc is None else 'Xboinc'
        print(f"Continued tracking ({app}) done in {round(t3 - t2, 1)}s (total tracking time {round(t3 - t1, 1)}s).")

    # Compare file to previous result
    output_file = Path.cwd() / output_filename
    assert output_file.exists()
    assert filecmp.cmp(output_file, output_file_2, shallow=False)
    xb._skip_xsuite_version_check = False
    if (Path.cwd() / checkpoint_filename).exists():
        (Path.cwd() / checkpoint_filename).unlink()


def test_vs_xtrack():
    xb._skip_xsuite_version_check = True
    output_file_2    = _get_output(None)
    xb_state         = xb.XbState.from_binary(output_file_2)
    part_xboinc_test = xb_state.particles
    if not boinc_missing:
        output_file_2 = _get_output(boinc_path)
        xb_state      = xb.XbState.from_binary(output_file_2)
        part_xboinc   = xb_state.particles
    
    # Testing results with xtrack
    line, part = _make_input()
    line.track(part, num_turns=num_turns, ele_start=ele_start, ele_stop=ele_stop, time=True)
    print(f"Tracking (Xtrack) done in {line.time_last_track:.1f}s.")

    if not boinc_missing:
        assert np.array_equal(part.particle_id, part_xboinc.particle_id),  "xboinc failed to match xtrack: ids are not equal"
        assert np.array_equal(part.state, part_xboinc.state),              "xboinc failed to match xtrack: states are not equal"
        assert np.array_equal(part.at_turn, part_xboinc.at_turn),          "xboinc failed to match xtrack: survivals are not equal"
        assert np.array_equal(part.x, part_xboinc.x),                      "xboinc failed to match xtrack: x are not equal"
        assert np.array_equal(part.y, part_xboinc.y),                      "xboinc failed to match xtrack: y are not equal"
        assert np.array_equal(part.zeta, part_xboinc.zeta),                "xboinc failed to match xtrack: zeta are not equal"
        assert np.array_equal(part.px, part_xboinc.px),                    "xboinc failed to match xtrack: px are not equal"
        assert np.array_equal(part.py, part_xboinc.py),                    "xboinc failed to match xtrack: py are not equal"
        assert np.array_equal(part.delta, part_xboinc.delta),              "xboinc failed to match xtrack: delta are not equal"
    
    assert np.array_equal(part.particle_id, part_xboinc_test.particle_id), "xboinc_test failed to match xtrack: ids are not equal"
    assert np.array_equal(part.state, part_xboinc_test.state),             "xboinc_test failed to match xtrack: states are not equal"
    assert np.array_equal(part.at_turn, part_xboinc_test.at_turn),         "xboinc_test failed to match xtrack: survivals are not equal"
    assert np.array_equal(part.x, part_xboinc_test.x),                     "xboinc_test failed to match xtrack: x are not equal"
    assert np.array_equal(part.y, part_xboinc_test.y),                     "xboinc_test failed to match xtrack: y are not equal"
    assert np.array_equal(part.zeta, part_xboinc_test.zeta),               "xboinc_test failed to match xtrack: zeta are not equal"
    assert np.array_equal(part.px, part_xboinc_test.px),                   "xboinc_test failed to match xtrack: px are not equal"
    assert np.array_equal(part.py, part_xboinc_test.py),                   "xboinc_test failed to match xtrack: py are not equal"
    assert np.array_equal(part.delta, part_xboinc_test.delta),             "xboinc_test failed to match xtrack: delta are not equal"
    xb._skip_xsuite_version_check = False
