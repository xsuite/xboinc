# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #

import tarfile
import numpy as np
import pandas as pd

import xtrack as xt
import xpart as xp
import xboinc as xb


user = 'sixtadm'


def test_submission():
    num_turns = 2000
    num_particles = 1e6
    line = xt.Line(elements=[
        xt.Drift(length=1.0), xt.Multipole(knl=[1e-6]), xt.Drift(length=1.0)])

    particles_per_sub = 1000

    studyname = "test_study"
    num_jobs = int(num_particles/particles_per_sub)

    with xb.SubmitJobs(user=user, study=studyname) as job:
        for i in range(num_jobs):
            particles = xp.Particles(x=np.random.normal(0, 0.0001, particles_per_sub),
                                     y=np.random.normal(0, 0.0001, particles_per_sub))
            job.add(job_name=f'{studyname}_{i}', num_turns=num_turns, line=line, particles=particles,
                    checkpoint_every=100)

    now = pd.Timestamp.now().timestamp()
    tarfiles = len(xb.user.get_folder(user).glob(f'{studyname}__*'))
    assert len(tarfiles) > 0
    # Look for the tar that is just generated
    for tar in tarfiles:
        ts = tar.name.split('__')[-1].split('.')[0].replace('_','T').replace('-', ':').replace(':', '-', 2)
        if abs(now - pd.Timestamp(ts).timestamp()) < 60:
            break
    assert tar.exists() and tar.stat().st_size!=0
    tar_contents = tarfile.open(tar)
    members = tar_contents.getmembers()
    assert len(members) == 2*num_jobs
    assert np.all([member.size > 8 for member in members])
    member_names = [member.name for member in members]
    assert np.all([member[:len(user)+2] == f'{user}__' for member in member_names])
    assert len([member for member in member_names if member[-5:]=='.json']) == num_jobs
    assert len([member for member in member_names if member[-4:]=='.bin']) == num_jobs
    tar.unlink()
