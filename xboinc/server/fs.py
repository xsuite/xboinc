# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

import os, subprocess
from pathlib import Path
from time import sleep
import random

from .tools import log_debug, log_info, log_error


# Functions to work with the AFS file system
# ==========================================

def on_afs(file):
    parents = list(fs_path(file).parents)
    if len(parents) < 3:
        return False
    else:
        return parents[-3] == Path('/afs/cern.ch')

def afs_add_acl(user, directory, acl='rlwik', is_server=False):
    try:
        directory = Path(directory).resolve()
        if directory.is_dir():
            cmd = subprocess.run(['fs', 'sa', directory, user, acl],
                                 stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            if cmd.returncode == 0:
                log_info(f"Set ACL '{acl}' on directory {directory} for user {user}.", is_server=is_server)
                return 0
            else:
                stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
                log_error(f"Failed to set ACL '{acl}' on {directory} for user {user}.\n{stderr}", is_server=is_server)
                return 1
        else:
            log_error(f"Directory {directory} not found. Do you have access permissions?", is_server=is_server)
            return 1
    except Exception as e:
        log_error(f"Failed to set ACL '{acl}' on {directory} for user {user}.\n{stderr}", e, is_server=is_server)
        return 1


def afs_remove_acl(user, directory, is_server=False):
    try:
        directory = Path(directory).resolve()
        if directory.is_dir():
            cmd = subprocess.run(['fs', 'sa', directory, user, 'none'],
                                 stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            if cmd.returncode == 0:
                log_info(f"Removed ACL on directory {directory} for user {user}.", is_server=is_server)
                return 0
            else:
                stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
                log_error(f"Failed to remove ACL on {directory} for user {user}.\n{stderr}", is_server=is_server)
                return 1
        else:
            log_error(f"Directory {directory} not found. Do you have access permissions?", is_server=is_server)
            return 1
    except Exception as e:
        log_error(f"Failed to remove ACL on {directory} for user {user}.\n{stderr}", e, is_server=is_server)
        return 1


def afs_print_acl(directory, is_server=False):
    try:
        directory = Path(directory).resolve()
        if directory.is_dir():
            cmd = subprocess.run(['fs', 'la', directory],
                                 stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            if cmd.returncode == 0:
                stdout = cmd.stdout.decode('UTF-8').strip().split('\n')
                log_info(f"{stdout}", is_server=is_server)
                return 0
            else:
                stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
                log_error(f"Failed to remove ACL on {directory} for user {user}.\n{stderr}", is_server=is_server)
                return 1
        else:
            log_error(f"Directory {directory} not found. Do you have access permissions?", is_server=is_server)
            return 1
    except Exception as e:
        log_error(f"Failed to remove ACL on {directory} for user {user}.\n{stderr}", e, is_server=is_server)
        return 1


# Functions to work with the EOS file system
# ==========================================

EOS_MGM_URL = 'root://eosuser.cern.ch'
eos_env = {**os.environ, 'EOS_MGM_URL': EOS_MGM_URL}

def on_eos(file):
    parents = list(fs_path(file).parents)
    if len(parents) < 2:
        return False
    else:
        return parents[-2] == Path('/eos')

def fs_path(path):
    path = Path(path).expanduser().resolve()
    return Path(path.as_posix().replace('/eos/home-','/eos/user/'))

def eos_installed():
    try:
        cmd = subprocess.run(['eos', "--version"], stdout=subprocess.PIPE,
                             stderr=subprocess.PIPE, check=True, env=eos_env)
        return cmd.returncode == 0
    except (subprocess.CalledProcessError, FileNotFoundError):
        return False

def missing_eos(message=''):
    if eos_installed():
        return 0
    else:
        log_error(f"{message} EOS is not installed on your system.",
                  EnvironmentError(), is_server=is_server)
        return 1

# def xrdcp_installed():
#     try:
#         cmd = subprocess.run(["xrdcp", "--version"], stdout=subprocess.PIPE,
#                              stderr=subprocess.PIPE, check=True)
#         return cmd.returncode == 0
#     except (subprocess.CalledProcessError, FileNotFoundError):
#         return False


# General file IO functions
# =========================

def _dir(directory):
    directory = Path(directory)
    if not directory.is_dir() or f'{directory}'[-1] == '/':
        return f'{directory}'
    else:
        return f'{directory}/'

def fs_glob(path, pattern, is_server=False):
    path = fs_path(path)
    err_mess = f"Failed fs_glob {pattern} in {path}!"
    try:
        if on_eos(path):
            if missing_eos(err_mess):
                return []
            cmd = subprocess.run(['eos', 'find', '-name', pattern, f'{path}'],
                                 stdout=subprocess.PIPE, stderr=subprocess.PIPE, env=eos_env)
        else:
            cmd = subprocess.run(['find', f'{path}', '-name', pattern],
                                 stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        if cmd.returncode != 0 or cmd.stdout == b'':
            return []
        files = [Path(ss).resolve() for ss in cmd.stdout.decode('UTF-8').strip().split('\n')]
        return [f for f in files if f.stat().st_size!=0]
    except Exception as e:
        log_error(f"{err_mess}\n", e, is_server=is_server)
        return []

def fs_exists(file, is_server=False):
    file = fs_path(file)
    err_mess = f"Failed fs_exists for {file}!"
    try:
        if on_eos(file):
            if missing_eos(err_mess):
                return False
            cmd = subprocess.run(['eos', 'find', '-name', file.name, f'{file}'],
                                 stdout=subprocess.PIPE, stderr=subprocess.PIPE, env=eos_env)
            if cmd.returncode != 0 or cmd.stdout == b'':
                return False
            return Path(cmd.stdout.decode('UTF-8').strip()).resolve().stat().st_size!=0
        else:
            return file.exists() and file.stat().st_size!=0
    except Exception as e:
        log_error(f"{err_mess}\n", e, is_server=is_server)
        return False

def fs_rm(file, is_server=False):
    file = fs_path(file)
    err_mess = f"Failed eos_rm for {file}!"
    try:
        if on_eos(file):
            if missing_eos(err_mess):
                return 1
            cmd = subprocess.run(['eos', 'rm', '-r', _dir(file)],
                                 stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                                 env=eos_env)
        else:
            cmd = subprocess.run(['rm', '-r', f'{file}'], stdout=subprocess.PIPE,
                                 stderr=subprocess.PIPE)
        if cmd.returncode == 0:
            return 0
        else:
            stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
            log_error(f"{err_mess}\n{stderr}", is_server=is_server)
            return 1
    except Exception as e:
        log_error(f"{err_mess}\n", e, is_server=is_server)
        return 1


# Always use the following functions file by file, not for a list of files

def fs_cp(file, directory, maximum_trials=10, wait=2.7, is_server=False):
    file   = fs_path(file)
    directory = fs_path(directory)
    if file.parent == directory:
        return 0
    if not directory.is_dir():
        log_error(f"Failed fs_cp: {directory} is not a directory!")
        return 1
    err_mess = f"Failed fs_cp {file} to {directory}!"
    try:
        for i in range(maximum_trials):
            if on_eos(file) or on_eos(directory):
                if missing_eos(err_mess):
                    return 1
                cmd = subprocess.run(['eos', 'cp', f'{file}', _dir(directory)],
                                     stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                                     env=eos_env)
            else:
                cmd = subprocess.run(['cp', f'{file}', f'{directory}'],
                                     stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            if cmd.returncode == 0 and eos_exists(directory / file.name):
                return 0
            if i != maximum_trials-1:
                log_debug(f"{err_mess}\nRetrying ({i})..", is_server=is_server)
                sleep(abs(wait+random.normalvariate(0, 0.1*wait)))
        log_error(f"{err_mess}\n", is_server=is_server)
        if not eos_exists(directory / file.name):
            log_error(f"Command succeeds but destination file is not created!\n",
                      is_server=is_server)
        else:
            stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
            log_error(f"Command failed: {stderr}\n", is_server=is_server)
        log_error("Giving up.", is_server=is_server)
        return 1
    except Exception as e:
        log_error(f"{err_mess}\n", e, is_server=is_server)
        return 1

def fs_rename(file, new_file, maximum_trials=10, wait=2.7, is_server=False):
    file     = fs_path(file)
    new_file = fs_path(new_file)
    if file.parent != new_file.parent:
        log_error(f"Failed fs_rename: {file} not in the same directory as {new_file}!")
        return 1
    err_mess = f"Failed fs_rename {file} to {new_file}!"
    try:
        for i in range(maximum_trials):
            if on_eos(file):
                if missing_eos(err_mess):
                    return 1
                cmd = subprocess.run(['eos', 'mv', f'{file}', new_file],
                                     stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                                     env=eos_env)
            else:
                cmd = subprocess.run(['mv', f'{file}', new_file],
                                     stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            if cmd.returncode == 0 and eos_exists(new_file):
                return 0
            if i != maximum_trials-1:
                log_debug(f"{err_mess}\nRetrying ({i})..", is_server=is_server)
                sleep(abs(wait+random.normalvariate(0, 0.1*wait)))
        log_error(f"{err_mess}\n", is_server=is_server)
        if not eos_exists(new_file):
            log_error(f"Command succeeds but destination file is not created!\n",
                      is_server=is_server)
        else:
            stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
            log_error(f"Command failed: {stderr}\n", is_server=is_server)
        log_error("Giving up.", is_server=is_server)
        return 1
    except Exception as e:
        log_error(f"{err_mess}\n", e, is_server=is_server)
        return 1

def fs_mv(file, directory, maximum_trials=10, wait=2.7, is_server=False):
    new_file = None
    if not directory.is_dir():
        new_file = directory
        directory = directory.parent
    cp_failed = fs_cp(file, directory, maximum_trials, wait, is_server=is_server)
    # returncode 0 means success
    if cp_failed:
        return 1
    else:
        mv_failed = 0
        if new_file is not None:
            # rename
            mv_failed = fs_rename(directory / file.name, new_file,
                                  maximum_trials, wait, is_server=is_server)
        if mv_failed:
            return 1
        else:
            return fs_rm(file, is_server=is_server)


