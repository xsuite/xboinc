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
    xb._skip_xsuite_version_check = True
    num_turns = 100
    num_particles = 5000
    checkpoint_every = 25
    line = xt.Line(elements=[
        xt.Drift(length=1.0), xt.Multipole(knl=[1e-4]), xt.Drift(length=1.0)])

    particles_per_sub = 1000
    num_jobs = int(num_particles/particles_per_sub)

    # Clean potential leftover from failed test
    input_folder = xb.user.get_folder(user) / 'input'
    output_folder = xb.user.get_folder(user) / 'output'
    for file in input_folder.glob('*'):
        if file.is_dir():
            shutil.rmtree(folder)
        else:
            file.unlink()
    for file in output_folder.glob('*/'):
        if file.is_dir():
            shutil.rmtree(folder)
        else:
            file.unlink()

    studyname = "test_study_1"
    with xb.SubmitJobs(user=user, study=studyname) as job:
        for i in range(num_jobs):
            particles = xp.Particles(x=np.random.normal(0, 0.01, particles_per_sub),
                                     y=np.random.normal(0, 0.003, particles_per_sub))
            job.add(job_name=f'{studyname}_{i}', num_turns=num_turns, line=line, particles=particles,
                    checkpoint_every=checkpoint_every)

    time.sleep(5)
    studyname = "test_study_2"
    with xb.SubmitJobs(user=user, study=studyname) as job:
        for i in range(num_jobs):
            particles = xp.Particles(x=np.random.normal(0, 4.7, particles_per_sub),
                                     y=np.random.normal(0, 0.39, particles_per_sub))
            job.add(job_name=f'{studyname}_{i}', num_turns=num_turns, line=line, particles=particles,
                    checkpoint_every=checkpoint_every)

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
    xb._skip_xsuite_version_check = False


def test_running():
    exec_file = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    if len(exec_file) == 0 or not exec_file[0].exists():
        raise ValueError("No executable found! Check order of tests.")
    exec_file = exec_file[0]

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


def test_retrieval():
    xb._skip_xsuite_version_check = True
    for studyname in ['test_study_1', 'test_study_2']:
        num_jobs = 0
        x_mean_prev = 0
        x_std_prev = 0
        y_mean_prev = 0
        y_std_prev = 0
        for job, particles in xb.RetrieveJobs(user=user, study=studyname):
            assert job['user'] == user
            assert job['study'] == studyname
            num_jobs += 1
            x_mean = np.mean(particles.x)
            x_std = np.std(particles.x)
            y_mean = np.mean(particles.y)
            y_std = np.std(particles.y)
            assert not (np.isclose(x_mean, x_mean_prev)
                        and np.isclose(x_std, x_std_prev)
                        and np.isclose(y_mean, y_mean_prev)
                        and np.isclose(y_std, y_std_prev))
            x_mean_prev = x_mean
            x_std_prev = x_std
            y_mean_prev = y_mean
            y_std_prev = y_std
            print(f"Job {job['job_name']} : x = {x_mean:.4} +- {x_std:.4}  "\
                + f"y = {y_mean:.4} +- {y_std:.4}")
            
        assert num_jobs == 5
    xb._skip_xsuite_version_check = False

