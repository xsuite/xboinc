# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

import subprocess
from pathlib import Path


def afs_add_acl(user, folder, acl='rlwik'):
    folder = Path(folder).resolve()
    if folder.is_dir():
        cmd = subprocess.run(['fs', 'sa', folder, user, acl],
                             stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        if cmd.returncode == 0:
            print(f"Set ACL '{acl}' on folder {folder} for user {user}.")
        else:
            stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
            raise Exception(f"Failed to set ACL on {folder} for user {user}.\n{stderr}")
    else:
        raise Exception(f"Folder {folder} not found. Do you have access permissions?")


def afs_remove_acl(user, folder):
    folder = Path(folder).resolve()
    if folder.is_dir():
        cmd = subprocess.run(['fs', 'sa', folder, user, 'none'],
                             stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        if cmd.returncode == 0:
            print(f"Removed ACL on folder {folder} for user {user}.")
        else:
            stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
            raise Exception(f"Failed to remove ACL on {folder} for user {user}.\n{stderr}")
    else:
        raise Exception(f"Folder {folder} not found. Do you have access permissions?")


def afs_print_acl(folder):
    folder = Path(folder).resolve()
    if folder.is_dir():
        cmd = subprocess.run(['fs', 'la', folder],
                             stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        if cmd.returncode == 0:
            stdout = cmd.stdout.decode('UTF-8').strip().split('\n')
            print(f"{stdout}")
        else:
            stderr = cmd.stderr.decode('UTF-8').strip().split('\n')
            raise Exception(f"Failed to remove ACL on {folder} for user {user}.\n{stderr}")
    else:
        raise Exception(f"Folder {folder} not found. Do you have access permissions?")

