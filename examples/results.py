# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2024.                 #
########################################### #

import xboinc as xb

list_of_succeeded_jobs = []
user='sixtadm'
study_name='example_study'
for new_particles, jobinfo in xb.RetrieveJobs(user=user, study_name=study_name):
    print(jobinfo)
    print(f"Particles: {new_particles.at_turn}")
