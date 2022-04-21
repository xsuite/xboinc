import numpy as np

import xboinc as xb

# Read output
filename = 'sim_state_out.bin'
sim_state = xb.read_output_file(filename)

# Look at particles state
particles = sim_state.particles

assert np.all(particles.s == 20)