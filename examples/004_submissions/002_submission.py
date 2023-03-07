import os
import json
import glob
import tarfile
import itertools

import numpy as np

import xtrack as xt
import xpart as xp
import xboinc as xb

import os, subprocess
from pathlib import Path
from time import sleep
import random

user     = 'ddicroce'                     # this should be read from a config json in the eos written by the boinc server
name     = 'test'                         # study name

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

particles_per_sub = 1000
line = xt.Line.from_dict(input_data['line'])

with xb.SubmitJobs(username=user, studyname=name) as job:
    for i in range(0, len(coords), particles_per_sub):
        job_id   = job_id   = i // particles_per_sub
        job_name = f'{name}_{job_id}'
        for j, dim_name in enumerate(dim_names):
            input_data['particle'][dim_name] = []
        for coord in coords[i:i+particles_per_sub]:
            for j, dim_name in enumerate(dim_names):
                input_data['particle'][dim_name].append(coord[j])
        for dim_name in dim_names:
            input_data['particle'][dim_name] = np.array(input_data['particle'][dim_name])
    
        # Simulation input
        num_turns = 1000
        particles = xp.Particles.from_dict(input_data['particle'])
    
        job.add(job_name=job_name, num_turns=num_turns, line=line, particles=particles,
                checkpoint_every=100)

