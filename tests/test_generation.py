import subprocess
import json
import numpy as np
from pathlib import Path
import os

import xtrack as xt
import xpart as xp
import xboinc as xb


def test_compilation():
    source_files = xb.generate_executable_source()
    assert Path(Path.cwd() / "main.c").exists()
    assert Path(Path.cwd() / "sim_config.h").exists()
    assert Path(Path.cwd() / "xtrack_tracker.h").exists()
    
    xb.generate_executable()
    exec_file = Path.cwd() / "xboinc_executable"
    assert exec_file.exists()
    assert os.access(exec_file, os.X_OK)
