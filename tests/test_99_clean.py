# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #

import subprocess
import json
import numpy as np
from pathlib import Path
import os
import time
import filecmp

import xtrack as xt
import xcoll as xc
import xboinc as xb
from xboinc.server import server_account, dropdir


input_filename      = 'xboinc_input.bin'
output_filename     = 'sim_state_out.bin'
checkpoint_filename = 'checkpoint.bin'


def test_clean():
    input_files      = list(Path.cwd().glob(f'{input_filename}*'))
    output_files     = list(Path.cwd().glob(f'{output_filename}*'))
    checkpoint_files = list(Path.cwd().glob(f'{checkpoint_filename}*'))
    exec_files       = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    for file in [*input_files, *output_files, *checkpoint_files, *exec_files]:
        if file.exists():
            file.unlink()
    xb.deregister(server_account)
    for f in dropdir.glob(f"*_{server_account}.json"):
        f.unlink()
