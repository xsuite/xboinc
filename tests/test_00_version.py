# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
########################################### #

import pytest
import sys

from xboinc import __version__, __xsuite__versions__
from xboinc.simulation_io import XbVersion
from xboinc.simulation_io.version import _version_to_int, _int_to_version, assert_versions


def test_version():
    assert __version__ == '0.1.7'


def test_xb_ver():
    xb_ver = XbVersion()
    xb_ver.assert_version()
    with pytest.raises(ImportError):
        xb_ver.xboinc_version = _version_to_int('0.0.0')
        xb_ver.assert_version()


def test_xsuite_versions():
    expected_version = {
        'xobjects' : '0.2.10',
        'xdeps'    : '0.5.2',
        'xpart'    : '0.16.3',
        'xtrack'   : '0.48.1',
        'xfields'  : '0.15.0',
        'xcoll'    : '0.2.7',
    }
    current_version = {}

    for mod in expected_version.keys():
        __import__(mod)
        current_version[mod] = sys.modules[mod].__version__
        sys.modules[mod].__version__ = expected_version[mod]
    assert_versions()

    for mod in expected_version.keys():
        sys.modules[mod].__version__ = '0.0.0'
        with pytest.raises(ImportError):
            assert_versions()
        sys.modules[mod].__version__ = current_version[mod]
