import subprocess
from pathlib import Path
import numpy as np

import xtrack as xt
import xpart as xp
import xboinc as xb


# Create simulation input
num_turns = 200
line = xt.Line(elements=[
    xt.Drift(length=1.0), xt.Multipole(knl=[1e-6]), xt.Drift(length=1.0)])
particles = xp.Particles(mass0=xp.PROTON_MASS_EV, p0c=7e12, x=[1e-6,2e-6,3e-6])

xb.SimConfig.build(line=line, particles=particles, num_turns=num_turns,
                    filename='xboinc_input.bin')


# Run xboinc
cmd = subprocess.run(['uname', '-ms'], stdout=subprocess.PIPE)
architecture = cmd.stdout.decode('UTF-8').strip().lower().replace(' ','-')
exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-{architecture}'))
if len(exec_file)==0 or not exec_file[0].exists():
    raise ValueError("No executable found")
exec_file = exec_file[0]
cmd = subprocess.run(exec_file)
if cmd.returncode != 0:
    raise RuntimeError(f"Tracking failed.")


# Read output
filename = 'sim_state_out.bin'
sim_state = xb.SimState.from_binary(filename)
particles = sim_state.particles

assert np.all(particles.s == 0)
assert np.all(particles.at_turn == num_turns)
assert sim_state.i_turn == num_turns

print('All checks passed!')