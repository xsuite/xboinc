# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

import xobjects as xo
import xpart as xp

from ..general import __version__


# XXX.YYY.ZZZ to XXXYYYZZZ
def _version_to_int(version):
    vers = version.split('.')
    return int(vers[0])*1000000 + int(vers[1])*1000 + int(vers[2])

# XXXYYYZZZ to XXX.YYY.ZZZ
def _int_to_version(verint):
    XXX = int(verint / 1000000)
    YYY = int((verint - XXX*1000000)/1000)
    ZZZ = int(verint - XXX*1000000 - YYY*1000)
    return f"{XXX}.{YYY}.{ZZZ}"


app_version = '.'.join(__version__.split('.')[:2])
app_version_int = int(_version_to_int(__version__)/1000)


# This class overloads the first field from the SimState,
# in order to read the correct version from the binary
class SimVersion(xo.HybridClass):
    _xofields = {
        'xboinc_version':   xo.Int64,    # version XXX.YYY.ZZZ as int
    }

    def __init__(self, **kwargs):
        if '_xobject' not in kwargs:
            kwargs['xboinc_version'] = _version_to_int(__version__)
        super().__init__(**kwargs)

    def assert_version(self):
        if app_version_int != int(self.xboinc_version/1000):
            error += f"Incompatible xboinc version! Output file needs "
            error +  f"{_int_to_version(self.xboinc_version)}, "
            error +  f"but current version is {__version__}.\n"
            raise ValueError(error)
