import subprocess
import json
import numpy as np
from pathlib import Path
import os

import xtrack as xt
import xpart as xp
import xboinc as xb


test_line = xt._pkg_root.parent / 'test_data' / 'lhc_with_bb' / 'line_and_particle.json'
num_turns = 1000


def test_generate_input():
    with test_line.open('r') as fid:
        input_data = json.load(fid)

    # We add some particles
    input_data['particle']['x'] += np.linspace(0, 1e-3, 10)

    # Simulation input
    line      = xt.Line.from_dict(input_data['line'])
    particles = xp.Particles.from_dict(input_data['particle'])

    # Assemble data structure
    xb.build_input_file(line=line, particles=particles, num_turns=num_turns, checkpoint_every=100,
                        name='xboinc_input.bin')

    input_file = Path.cwd() / "xboinc_input.bin"
    assert input_file.exists()


def test_track():
    # If no executable is present, make one
    exec_file = Path.cwd() / "xboinc_executable"
    if not exec_file.exists():
        xb.generate_executable()

    # If no input file is present, make one
    input_file = Path.cwd() / 'xboinc_input.bin'
    if not input_file.exists():
        test_generate_input()
    
    # run xboinc tracker
    cmd = subprocess.run([exec_file], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if cmd.returncode != 0:
        stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
        raise RuntimeError(f"Tracking failed. Stderr:\n {stderr}")

    # Read output
    output_file = Path.cwd() / 'sim_state_out.bin'
    assert output_file.exists()
    sim_state = xb.read_output_file(output_file)

    # Look at particles state
    particles_xboinc = sim_state.particles

    assert np.allclose(particles_xboinc.s, 0, rtol=1e-6, atol=0), "Unexpected s"
    assert np.all(particles_xboinc.at_turn == num_turns), "Unexpected survivals (particles)"
    assert sim_state.i_turn == num_turns, "Unexpecteds survival (sim_state)"


def test_vs_xtrack():
    # If no output is present, make one
    output_file = Path.cwd() / 'sim_state_out.bin'
    if not output_file.exists():
        test_track()
    sim_state = xb.read_output_file(output_file)
    particles_xboinc = sim_state.particles
    
    # Testing results with xtrack
    with test_line.open('r') as fid:
        input_data = json.load(fid)
    input_data['particle']['x'] += np.linspace(0, 1e-3, 10)
    line_xtrack = xt.Line.from_dict(input_data['line'])
    particles   = xp.Particles.from_dict(input_data['particle'])
    line_xtrack.build_tracker()
    line_xtrack.track(particles, num_turns=num_turns)

    assert np.array_equal(particles.at_turn, particles_xboinc.at_turn), "Fail to match xtrack: survivals are not equal"
    assert np.array_equal(particles.x, particles_xboinc.x),             "Fail to match xtrack: x are not equal"
    assert np.array_equal(particles.y, particles_xboinc.y),             "Fail to match xtrack: y are not equal"
    assert np.array_equal(particles.zeta, particles_xboinc.zeta),       "Fail to match xtrack: zeta are not equal"
    assert np.array_equal(particles.px, particles_xboinc.px),           "Fail to match xtrack: px are not equal"
    assert np.array_equal(particles.py, particles_xboinc.py),           "Fail to match xtrack: py are not equal"
    assert np.array_equal(particles.delta, particles_xboinc.delta),     "Fail to match xtrack: delta are not equal"


def test_clean():
    input_file = Path.cwd() / "xboinc_input.bin"
    output_file = Path.cwd() / 'sim_state_out.bin'
    exec_file = Path.cwd() / "xboinc_executable"
    for file in [input_file, output_file, exec_file]:
        if file.exists():
            file.unlink()
