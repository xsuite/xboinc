import json
import glob
import tarfile
import itertools

import numpy as np

import xtrack as xt
import xpart as xp
import xboinc as xb

eos      = ''
user     = 'ddicroce' # this should be read from a config json in the eos written by the boinc server
name     = 'test_noloop' 

filename = xt._pkg_root.parent.joinpath(
    'test_data/lhc_with_bb/line_and_particle.json')

with open(filename, 'r') as fid:
    input_data = json.load(fid)


# loop or anything that user wishes
nparticles        = 6000 # approximate number of particles to be generated
ndims             = 2
dim_names         = ['x', 'y']
particles_per_dim = int(round(nparticles ** (1.0/ndims)))
coords            = list(itertools.product(*[np.linspace(0, 1e-3, particles_per_dim) for i in range(ndims)]))

for dim_name in dim_names:
    input_data['particle'][dim_name] = []

for coord in coords:
    for i, dim_name in enumerate(dim_names):
        input_data['particle'][dim_name].append(coord[i])

for dim_name in dim_names:
    input_data['particle'][dim_name] = np.array(input_data['particle'][dim_name])[:nparticles]

print('# particles:', len(input_data['particle'][dim_names[-1]]), ' | ', particles_per_dim, ' per dimension') # real number of particles

# Simulation input
num_turns = 1000
line = xt.Line.from_dict(input_data['line'])
particles = xp.Particles.from_dict(input_data['particle'])

job_name = name
xb.prepare_job(name=name, user=user, job_name=job_name, num_turns=num_turns, line=line, particles=particles, checkpoint_every=100)

#xb.prepare_study(name=name)
xb.submit_study(name=name, eosdir=eosdir)
