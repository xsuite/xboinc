# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #

from pathlib import Path
import json
import pytest

import xboinc as xb

user       = 'sixtadm'
folder_afs = Path('/afs/cern.ch/user/s/sixtadm/public/test_xboinc').resolve()
folder_eos = Path('/afs/cern.ch/user/s/sixtadm/eos_sixtadm/test_xboinc').resolve()

user_data_file = xb._pkg_root / 'user_data.json'


def test_remove():
    xb.user.remove_user(user)
    with user_data_file.open('r') as fid:
        userdict = json.load(fid)
    assert user not in userdict.keys()


def test_register():
    xb.register(user, folder_afs)
    assert xb.user.get_folder(user) == folder_afs
    assert (xb.user.get_folder(user) / 'input').exists()
    assert (xb.user.get_folder(user) / 'output').exists()
    assert xb.user.get_domain(user) == 'afs'
    assert xb.user.get_user_data(user)['folder'] == folder_afs.as_posix()
    assert xb.user.get_user_data(user)['domain'] == 'afs'
    assert xb.server.eos.eos_exists(xb.server.paths.dropdir / f"register_{user}.json")

    with pytest.raises(NotImplementedError):
        xb.register(user, folder_eos)
