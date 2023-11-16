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
from xboinc.server import server_account


def test_clean():
    input_files  = list(Path.cwd().glob('xboinc_input.bin*'))
    output_files = list(Path.cwd().glob('sim_state_out.bin*'))
    exec_files   = list(Path.cwd().glob(f'xboinc_{xb.app_version}-*'))
    for file in [*input_files, *output_files, *exec_files]:
        if file.exists():
            file.unlink()
    xb.deregister(server_account)
