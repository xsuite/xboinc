# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #


import numpy as np

import xtrack as xt
import xpart as xp
import xboinc as xb


user = 'sixtadm'


num_turns = 2000
num_particles = 1e6
line = xt.Line(elements=[
    xt.Drift(length=1.0), xt.Multipole(knl=[1e-6]), xt.Drift(length=1.0)])

particles_per_sub = 1000

studyname = "example_study"


# Submission can be done in a context, where the submission
# itself is triggered when exiting the context
with xb.SubmitJobs(user=user, study=studyname) as submitter:
    for i in range(int(num_particles/particles_per_sub)):
        particles = xp.Particles(x=np.random.normal(0, 0.0001, particles_per_sub),
                                 y=np.random.normal(0, 0.0001, particles_per_sub))
        submitter.add(job_name=f'{studyname}_{i}', num_turns=num_turns, line=line, particles=particles,
                checkpoint_every=100)


# Or by manually triggering the submission
submitter = xb.SubmitJobs(user=user, study=studyname)
for i in range(int(num_particles/particles_per_sub)):
    particles = xp.Particles(x=np.random.normal(0, 0.0001, particles_per_sub),
                             y=np.random.normal(0, 0.0001, particles_per_sub))
    submitter.add(job_name=f'{studyname}_{i}', num_turns=num_turns, line=line, particles=particles,
                  checkpoint_every=100)
submitter.submit()

