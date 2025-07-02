# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2024.                 #
########################################### #

from pathlib import Path
import shutil

import xboinc as xb
from xboinc.server import server_account, dropdir
from xboinc.server.paths import _test_afs


input_dir  = _test_afs / 'input_dev'
output_dir = _test_afs / 'output_dev'

input_filename      = 'xboinc_input'
output_filename     = 'xboinc_state_out'
checkpoint_filename = 'checkpoint'


def test_clean():
    input_files      = list(Path.cwd().glob(f'{input_filename}*'))
    output_files     = list(Path.cwd().glob(f'{output_filename}*'))
    checkpoint_files = list(Path.cwd().glob(f'{checkpoint_filename}*'))
    exec_files       = list(Path.cwd().glob(f'xboinc*_{xb.app_version}-*'))
    boinc_files      = [Path.cwd() / f for f in ["boinc_finish_called", "stderr.txt", "boinc_lockfile"]]
    sources          = [Path.cwd() / "xtrack_tracker.h", Path.cwd() / "xb_input.h",
                        *xb.executable.generate._sources]
    for file in [*input_files, *output_files, *checkpoint_files, *exec_files, *boinc_files, *sources]:
        if file.exists():
            file.unlink()
    xb.deregister(server_account)
    for f in dropdir.glob(f"*_{server_account}.json"):
        f.unlink()
    # Clean potential leftover from failed submission test
    for file in input_dir.glob(f"{server_account}__*"):
        if file.is_dir():
            shutil.rmtree(file)
        else:
            file.unlink()
    for file in output_dir.glob(f"{server_account}__*"):
        if file.is_dir():
            shutil.rmtree(file)
        else:
            file.unlink()
