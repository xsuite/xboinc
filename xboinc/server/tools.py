# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

from pathlib import Path
import logging as lg
import traceback
import tarfile
import datetime



def timestamp(ms=False):
    ms = -3 if ms else -7
    return datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S.%f")[:ms]


def log_debug(message, cmd=None, is_server=False):
    if is_server:
        cmd = '' if cmd is None else f'{cmd}:  '
        lg.debug(f"{timestamp(ms=True)}:  {cmd}{message}")
    else:
        print(message)

def log_info(message, cmd=None, is_server=False):
    if is_server:
        cmd = '' if cmd is None else f'{cmd}:  '
        lg.info(f"{timestamp(ms=True)}:  {cmd}{message}")
    else:
        print(message)

def log_error(message, cmd=None, e=None, is_server=False):
    if is_server:
        cmd = '' if cmd is None else f'{cmd}:  '
        stack = '' if e is None else f"\n{traceback.format_exc()}\n{e}"
        lg.error(f"{timestamp(ms=True)}:  {cmd}{message}{stack}")
    else:
        raise Exception(message, e)

def untar(filename, cmd=None, is_server=False):
    cmd = 'untar' if cmd is None else cmd
    try:
        filename = Path(filename)
        thisdir = filename.parent / filename.stem[:-4]
        thisdir.mkdir(parents=True, exist_ok=True)
        with tarfile.open(filename, 'r:gz') as fid:
            fid.extractall(path=thisdir)
        filename.unlink()
        log_debug(f"Extracted {filename}.", cmd=cmd, is_server=is_server)
    except Exception as e:
        log_error(f"Failed extracting {filename}", e, cmd=cmd, is_server=is_server)
