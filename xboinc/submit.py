# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

import json
import tarfile
from pathlib import Path
import tempfile

from .user import get_domain, get_directory
from .server import fs_mv, missing_eos, timestamp
from .simulation_io import SimConfig, app_version, assert_versions


class SubmitJobs:

    def __init__(self, user, study, dev_server=False):
        if not dev_server:
            raise NotImplementedError("Regular server not yet operational. "
                                    + "Please use dev_server=True.")
        assert_versions()
        if '__' in study:
            raise ValueError("The character sequence '__' is not allowed in 'study'!")
        self._username = user
        self._domain = get_domain(user)
        if self._domain=='eos':
            missing_eos()
        if dev_server:
            self._target = get_directory(user) / 'input_dev'
        else:
            self._target = get_directory(user) / 'input'
        self._studyname = study
        self._submitfile = f"{self._studyname}__{timestamp()}.tar.gz"
        self._json_files = []
        self._bin_files = []
        self._temp    = tempfile.TemporaryDirectory()
        self._tempdir = Path(self._temp.name).resolve()
        self._tempdir.mkdir(parents=True, exist_ok=True)

    def __enter__(self, *args, **kwargs):
        return self

    def __exit__(self, *args, **kwargs):
        self.submit()


    def add(self, *, job_name, num_turns, line, particles, checkpoint_every=-1, **kwargs):
        if '__' in job_name:
            raise ValueError("The character sequence '__' is not allowed in 'job_name'!")
        filename = f"{self._username}__{timestamp(ms=True)}"
        json_file = Path(self._tempdir, f"{filename}.json")
        bin_file  = Path(self._tempdir, f"{filename}.bin")
        json_dict = {
            'study': self._studyname,
            'user': self._username,
            'job_name': job_name,
            'xboinc_ver': app_version,
            **kwargs
        }
        with json_file.open('w') as fid:
            json.dump(json_dict, fid)
        SimConfig.build(filename=bin_file, num_turns=num_turns, line=line,
                         particles=particles, checkpoint_every=checkpoint_every)
        self._json_files += [json_file]
        self._bin_files  += [bin_file]


    def submit(self):
        with tarfile.open(self._tempdir / self._submitfile, "w:gz") as tar:
            for thisfile in self._json_files + self._bin_files:
                tar.add(thisfile, arcname=thisfile.name)
        if self._domain == 'eos' or self._domain == 'afs':
            fs_mv(self._tempdir / self._submitfile, self._target)
        else:
            raise ValueError(f"Wrong domain {self._domain} for user {self._username}!")
        # TODO: check that tar contains all files
        for thisfile in self._json_files + self._bin_files:
            thisfile.unlink()
        self._temp.cleanup()

