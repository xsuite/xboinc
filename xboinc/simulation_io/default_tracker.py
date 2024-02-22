# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2024.                 #
# ######################################### #

# ===============================================================================================
# IMPORTANT
# ===============================================================================================
# Only make changes to this file just before a minor version bump (need a separate commit though)
# to avoid having multiple xboinc versions with out-of-sync executables.
# ===============================================================================================

import xtrack as xt
import xfields as xf
import xobjects as xo
import xcoll as xc

from .version import assert_versions


default_element_classes = [
            xt.Marker,
            xt.Drift,
            # xt.CombinedFunctionMagnet  # deprecated
            xt.Bend,
            xt.Multipole,
            xt.Quadrupole,
            xt.Sextupole,
            xt.SimpleThinBend,
            xt.SimpleThinQuadrupole,
            xt.ReferenceEnergyIncrease,
            xt.Cavity,
            xt.Solenoid,
            xt.XYShift,
            xt.Elens,
            xt.NonLinearLens,
            xt.Wire,
            xt.SRotation,
            xt.XRotation,
            xt.YRotation,
            xt.ZetaShift,
            xt.RFMultipole,
            # xt.Fringe,  # untested
            # xt.Wedge,   # untested
            xt.DipoleEdge,
            xt.Exciter,
            # xt.LinearTransferMatrix  # deprecated
            xt.LineSegmentMap,
            xt.FirstOrderTaylorMap,
            xt.SecondOrderTaylorMap,
            xf.BeamBeamBiGaussian2D,
            xf.BeamBeamBiGaussian3D,
            # # Doesn't work because fieldmap in different buffer
            # xf.ElectronCloud,
            # xf.ElectronLensInterpolated,
            xc.BlackAbsorber,
            xc.EverestCollimator,
            xc.EverestCrystal,
            xt.LimitRect,
            xt.LimitRacetrack,
            xt.LimitEllipse,
            xt.LimitPolygon,
            xt.LimitRectEllipse,
            xt.LongitudinalLimitRect,
            xt.Tracker._get_default_monitor_class()
    ]


# The class ElementRefData is dynamically generated inside the tracker. We
# extract it here and use it to create the line metadata inside XbInput
ElementRefData = xt.tracker._element_ref_data_class_from_element_classes(
                        default_element_classes)
if {f.name for f in ElementRefData._fields} != {'elements', 'names'}:
    raise RunTimeError("The definition of `ElementRefData` has changed inside Xtrack! "
                     + "This renders Xboinc incompatible. Please ask a dev to update Xboinc.")


_default_tracker_cache = {}


def get_default_tracker():
    """
    Returns the default tracker used by Xboinc.
    """
    assert_versions()
    if 'tracker' in _default_tracker_cache:
        return _default_tracker_cache['tracker']

    line = xt.Line(elements=[])

    # We build the tracker on an empty line, but without compiling.
    line.build_tracker(compile=False, use_prebuilt_kernels=False)
    # Now we overwrite the TrackerData with our ElementRefData class, based on all elements
    tracker = line.tracker._tracker_data_cache[None]
    tracker._element_ref_data = tracker.build_ref_data(tracker._buffer, ElementRefData)

    _default_tracker_cache['tracker'] = line.tracker
    return line.tracker


def get_default_config():
    """
    Returns the default config used by Xboinc.
    """

    assert_versions()
    if 'config' in _default_tracker_cache:
        return _default_tracker_cache['config']

    default_config_hash = get_default_tracker()._hashable_config()
    _default_tracker_cache['config'] = default_config_hash
    return default_config_hash


def get_default_tracker_kernel():
    """
    Returns the default tracker kernel used by Xboinc.
    """

    assert_versions()
    if 'kernel' in _default_tracker_cache:
        return _default_tracker_cache['kernel']

    # Now we trigger compilation
    get_default_tracker().get_track_kernel_and_data_for_present_config()
    kernel = get_default_tracker().track_kernel[get_default_config()]
    _default_tracker_cache['kernel'] = kernel

    return kernel
