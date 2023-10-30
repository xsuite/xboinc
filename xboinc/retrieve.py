# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

import json
import tarfile
from pathlib import Path
import tempfile

import xpart as xp

from .user import get_domain, get_folder
from .server.eos import mv_from_eos, mv_to_eos, xrdcp_installed
from .server.afs import mv_from_afs, mv_to_afs
from .server.tools import timestamp
from .simulation_io import SimState


class RetrieveJobs:
    
    def __init__(self, user, studyname):
        # untar all remaining tar files + delete if succeeded
        # glob folders, keep all files for which the json has studyname=studyname
        self._json_files = # list of json for this study
        self._bin_files = # list of json for this study


    def __enter__(self, *args, **kwargs):
        return self

    def __exit__(self, *args, **kwargs):
        if self._succeeded:
            # delete all jsons and binary files in self._json_files and self._bin_files
            pass

    def __iter__(self):
        # loop over self._json_files and self._bin_files
        # set a flag self._succeeded if loop went through the end
        pass

    def __next__(self):
        result = SimState.for_binary(next_filename)
        part = result.particles
        # delete json and binary
        return jobname, part
        

        
# Example user script

list_of_succeeded_jobs = []
with xb.RetrieveJobs(user=user, study=studyname) as all_jobs:
    for jobname, new_particles in all_jobs:
        list_of_succeeded_jobs += [jobname]
        new_particles.to_json(..)
# and now user can check which jobs are missing by inspecting list_of_succeeded_jobs

    
# https://realpython.com/python-iterators-iterables/
