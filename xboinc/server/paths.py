# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

from pathlib import Path

eosusr  = Path('/','eos','user','s','sixtadm')
eosdir  = eosusr / 'spooldirs' / 'xtrack'         # EOS spooldir for server
dropdir = eosdir / 'drop'                         # only location where users have write access (i.e. to register)

_test_afs = Path('/afs/cern.ch/user/s/sixtadm/public/test_xboinc')
_test_eos = Path('/eos/user/s/sixtadm/test_xboinc')
