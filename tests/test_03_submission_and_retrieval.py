# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #

import tarfile
import numpy as np
import pandas as pd
import subprocess
import tarfile
from pathlib import Path
import time
import shutil

import xtrack as xt
import xpart as xp
import xboinc as xb


user = 'sixtadm'


def test_submission():
    num_turns = 10
    num_particles = 5000
    line = xt.Line(elements=[
        xt.Drift(length=1.0), xt.Multipole(knl=[1e-6]), xt.Drift(length=1.0)])

    particles_per_sub = 1000
    num_jobs = int(num_particles/particles_per_sub)

    studyname = "test_study_1"
    with xb.SubmitJobs(user=user, study=studyname) as job:
        for i in range(num_jobs):
            particles = xp.Particles(x=np.random.normal(0, 0.01, particles_per_sub),
                                     y=np.random.normal(0, 0.003, particles_per_sub))
            job.add(job_name=f'{studyname}_{i}', num_turns=num_turns, line=line, particles=particles,
                    checkpoint_every=2)

    time.sleep(5)
    studyname = "test_study_2"
    with xb.SubmitJobs(user=user, study=studyname) as job:
        for i in range(num_jobs):
            particles = xp.Particles(x=np.random.normal(0, 0.7, particles_per_sub),
                                     y=np.random.normal(0, 0.39, particles_per_sub))
            job.add(job_name=f'{studyname}_{i}', num_turns=num_turns, line=line, particles=particles,
                    checkpoint_every=2)

    now = pd.Timestamp.now().timestamp()
    tarfiles = list(Path(xb.user.get_folder(user) / 'input').glob(f'{studyname}__*'))
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
    assert len(member_names) == 2*num_jobs
    assert np.all([member[:len(user)+2] == f'{user}__' for member in member_names])
    assert len([member for member in member_names if member[-5:]=='.json']) == num_jobs
    assert len([member for member in member_names if member[-4:]=='.bin']) == num_jobs


def test_running():
    exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))[0]
    if not exec_file.exists():
        raise ValueError("No executable found! Check order of tests.")

    input_folder = xb.user.get_folder(user) / 'input'
    for tar in input_folder.glob('*.tar.gz'):
        xb.server.untar(tar)

    json_files = list(input_folder.glob('*/*.json'))
    for json_file in json_files:
        bin_file = json_file.with_suffix('.bin')
        input_name = bin_file
        shutil.move(bin_file, Path.cwd() / 'xboinc_input.bin')
        cmd = subprocess.run([exec_file])
        if cmd.returncode != 0:
            raise RuntimeError(f"Tracking failed.")
        out_file = Path.cwd() / 'sim_state_out.bin'
        shutil.move(out_file, input_name)

    tar1 = xb.user.get_folder(user) / 'output' / f"{user}__{xb.server.timestamp(ms=True)}.tar.gz"
    with tarfile.open(tar1, "w:gz") as tar:
        for json_file in json_files[:3]:
            tar.add(json_file, arcname=json_file.name)
            binfile = json_file.with_suffix('.bin')
            tar.add(binfile, arcname=binfile.name)
            json_file.unlink()
            binfile.unlink()

    time.sleep(5)
    tar2 = xb.user.get_folder(user) / 'output' / f"{user}__{xb.server.timestamp(ms=True)}.tar.gz"
    with tarfile.open(tar2, "w:gz") as tar:
        for json_file in json_files[3:]:
            tar.add(json_file, arcname=json_file.name)
            binfile = json_file.with_suffix('.bin')
            tar.add(binfile, arcname=binfile.name)
            json_file.unlink()
            binfile.unlink()

    # Clean folders
    for folder in input_folder.glob('*/'):
        folder.rmdir()
#         shutil.rmtree(folder)


def test_retrieval():
    for studyname in ['test_study_1', 'test_study_2']:
        num_jobs = 0
        for job, particles in xb.RetrieveJobs(user=user, study=studyname):
            assert job['user'] == user
            assert job['study'] == studyname
            num_jobs += 1
            surv = len(particles.state > 0)
            print(f"Job {job['job_name']} : {surv} particles survived.")
        assert num_jobs == 5

