import xboinc as xb

source_files = xb.generate_executable_source()

import os
os.system('clang main.c -o xboinc_executable')