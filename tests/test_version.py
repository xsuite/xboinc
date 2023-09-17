# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #

import pytest
from xboinc import __version__
from xboinc.simulation_io import SimVersion
from xboinc.simulation_io.version import _version_to_int, _int_to_version

def test_version():
    assert __version__ == '0.1.3'

def test_sim_ver():
    simver = SimVersion()
    simver.assert_version()
    print(_int_to_version(simver.xboinc_version))
    with pytest.raises(Exception):
        simver.xboinc_version = _version_to_int('0.0.0')
        simver.assert_version()
