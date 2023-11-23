# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #


import numpy as np

import xtrack as xt
import xpart as xp
import xboinc as xb


user = 'sixtadm'
line = xt.Line.from_json(xb._pkg_root.parent / 'tests' / 'data' / 'sequence_lhc_run3_b1.json')
line.build_tracker()

# Each of these jobs takes ~1h
num_jobs = 150
particles_per_job = 1000
num_turns = 20000
checkpoint_every = 1000

study_name = "example_study"
prev = time.time()
jobs = xb.SubmitJobs(user=user, study_name=study_name, line=line, dev_server=True)
for i in range(num_jobs):
    # output progress
    if i%25 == 0:
        now = time.time() ; print(f"{i}/{num_jobs}  ({now-prev:.4}s)"); prev = now
    # build particles
    particles = line.build_particles(x_norm=np.random.normal(0, 10, particles_per_job),
                                     y_norm=np.random.normal(0, 10, particles_per_job))
    # create job
    jobs.add(job_name=f'job{i}', num_turns=num_turns, particles=particles,
                  checkpoint_every=checkpoint_every)
jobs.submit()

