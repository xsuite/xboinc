import json
import numpy as np

import xtrack as xt
import xpart as xp
import xboinc as xb

filename = xt._pkg_root.parent.joinpath(
    'test_data/lhc_with_bb/line_and_particle.json')

with open(filename, 'r') as fid:
    input_data = json.load(fid)

# We add some particles
input_data['particle']['x'] += np.linspace(0, 1e-3, 10)

# Simulation input
num_turns = 1000
line = xt.Line.from_dict(input_data['line'])
particles = xp.Particles.from_dict(input_data['particle'])

# Assemble data structure
xb.build_input_file(line=line, particles=particles, num_turns=num_turns, checkpoint_every=100)
