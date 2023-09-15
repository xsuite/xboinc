# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

import os, sys
from pathlib import Path
import logging as lg
import traceback
import tarfile
import atexit
import base64
import datetime



def timestamp(ms=False):
    ms = -3 if ms else -7
    return datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S.%f")[:ms]


def log_debug(message, is_server=True):
    if is_server:
        lg.debug(f"{timestamp(ms=True)}:  {message}")
    else:
        print(message)

def log_info(message, is_server=True):
    if is_server:
        lg.info(f"{timestamp(ms=True)}:  {message}")
    else:
        print(message)

def log_error(message, e=None, is_server=True):
    if is_server:
        stack = '' if e is None else f"\n{traceback.format_exc()}\n{e}"
        lg.error(f"{timestamp(ms=True)}:  {message}{stack}")
    else:
        raise Exception(message, e)


def ranID():
    ran = base64.urlsafe_b64encode(os.urandom(8)).decode('utf-8')
    return ''.join(c if c.isalnum() else 'X' for c in ran)


def untar(filename):
    try:
        filename = Path(filename)
        thisdir = filename.parent / filename.stem[:-4]
        thisdir.mkdir(parents=True, exist_ok=True)
        with tarfile.open(filename, 'r:gz') as fid:
            fid.extractall(path=thisdir)
        filename.unlink()
        log_debug(f"Extracted {filename}.")

    except Exception as e:
        log_error(f"Failed extracting {filename}", e)


def lock(lockfile):
    lockfile = Path(lockfile)
    # Check if previous process still running
    if lockfile.exists():
        sys.exit(f"Previous {lockfile.name} script still active! Exiting...")
    else:
        # Otherwise register a lockfile
        lockfile.touch()
        def exit_handler():
            lockfile.unlink()
        atexit.register(exit_handler)



