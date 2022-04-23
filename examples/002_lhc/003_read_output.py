import numpy as np

import xboinc as xb

# Read output
filename = 'sim_state_out.bin'
sim_state = xb.read_output_file(filename)

# Look at particles state
particles = sim_state.particles

assert np.allclose(particles.s, 2.665888e+05, rtol=1e-6, atol=0)
assert np.all(particles.at_turn == 10)
assert sim_state.i_turn == 10

print('All checks passed!')