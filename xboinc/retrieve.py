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
from .simulation_io import SimConfig, app_version


class RetrieveJobs:
    
    def __init__(self, user, studyname):
        # glob binary files for studyname=studyname
    
    def __iter__(self):
        check version
        blabla
        part = xp.Particles(binary)
        return jobname, part
        

        
test = RetrieveJobs(studyname)
        
for job in RetrieveJobs(studyname):
    new_particles = job
    new_particles.to_json

    
    
    