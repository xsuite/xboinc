# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #

import subprocess
from pathlib import Path
import numpy as np

import xtrack as xt
import xpart as xp
import xcoll as xc
import xboinc as xb


# Create simulation input
num_turns = 20
num_particles = 5000
line = xt.Line.from_json(xc._pkg_root.parent / 'examples' / 'machines' / f'lhc_run3_b1.json')
coll_manager = xc.CollimatorManager.from_yaml(xc._pkg_root.parent / 'examples' / 'colldb' / f'lhc_run3.yaml', line=line, beam=1)
coll_manager.install_everest_collimators()
coll_manager.build_tracker()
coll_manager.set_openings()
part = coll_manager.generate_pencil_on_collimator('tcp.c6l7.b1', num_particles=num_particles)
coll_manager.enable_scattering()
input = xb.SimConfig(line=line, particles=part, num_turns=num_turns, checkpoint_every=5)
input.to_binary('xboinc_input.bin')


# Run xboinc
cmd    = subprocess.run(['uname', '-m'], stdout=subprocess.PIPE)
arch   = cmd.stdout.decode('UTF-8').strip().lower()
cmd    = subprocess.run(['uname', '-s'], stdout=subprocess.PIPE)
thisos = cmd.stdout.decode('UTF-8').strip().lower()
exec_files = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
exec_files = [f for f in exec_files if arch in str(f) and thisos in str(f)]
if len(exec_files)==0 or not exec_files[0].exists():
    raise ValueError("No executable found")
exec_file = exec_files[0]
cmd = subprocess.run(exec_file)
if cmd.returncode != 0:
    raise RuntimeError(f"Tracking failed.")


# Read output
filename = 'sim_state_out.bin'
sim_state = xb.SimState.from_binary(filename)
part = sim_state.particles
_ = coll_manager.lossmap(part, file=Path(path_out,f'lossmap_B1H.json'))
summary = coll_manager.summary(part, file=Path(path_out,f'coll_summary_B1H.out'))
print(summary)
