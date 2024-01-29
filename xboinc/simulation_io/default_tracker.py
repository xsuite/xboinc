# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

import xtrack as xt
import xfields as xf
import xobjects as xo
import xcoll as xc

from .version import assert_versions


_default_tracker_cache = {}


# ===============================================================================================
# IMPORTANT
# ===============================================================================================
# Only make changes to this file just before a minor version bump (need a separate commit though)
# to avoid having multiple xboinc versions with out-of-sync executables.
# ===============================================================================================


default_element_classes = [
            xt.Marker,
            xt.Drift,
            xt.Bend,
            xt.Multipole,
            xt.CombinedFunctionMagnet,
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
            # xt.Fringe,
            # xt.Wedge,
            xt.DipoleEdge,
            xt.Exciter,
            xt.LineSegmentMap,
            xt.FirstOrderTaylorMap,
            xf.BeamBeamBiGaussian2D,
            xf.BeamBeamBiGaussian3D,
            # # Doesn't work because fieldmap in different buffer
            # xf.ElectronCloud,
            xf.ElectronLensInterpolated,
            xf.SpaceCharge3D,
            xc.BlackAbsorber,
            xc.EverestCollimator,
            xc.EverestCrystal,
            xt.LimitRect,
            xt.LimitRacetrack,
            xt.LimitEllipse,
            # # not supported until per-particle block updated
            # xt.LimitPolygon,
            xt.LimitRectEllipse,
            xt.LongitudinalLimitRect
    ]

def get_default_tracker(**kwargs):
    """
    Returns a default tracker object.
    """

    if 'tracker' in _default_tracker_cache\
    and 'config' in _default_tracker_cache:
        return _default_tracker_cache['tracker'], _default_tracker_cache['config']

    assert_versions()

    # Dummy line containing all supported element types
    default_elements = [
            xt.Marker(),
            xt.Drift(),
            xt.Bend(length=1.0),
            xt.Multipole(),
            xt.CombinedFunctionMagnet(length=1.0),
            xt.Quadrupole(length=1.0),
            xt.Sextupole(length=1.0),
            xt.SimpleThinBend(),
            xt.SimpleThinQuadrupole(),
            xt.ReferenceEnergyIncrease(),
            xt.Cavity(),
            xt.Solenoid(length=1.0),
            xt.XYShift(),
            xt.Elens(),
            xt.NonLinearLens(),
            xt.Wire(),
            xt.SRotation(),
            xt.XRotation(),
            xt.YRotation(),
            xt.ZetaShift(),
            xt.RFMultipole(knl=[0], pn=[0]),
            # xt.Fringe(),
            # xt.Wedge(),
            xt.DipoleEdge(),
            xt.Exciter(nsamples=1),
            xt.LineSegmentMap(),
            xt.FirstOrderTaylorMap(),
            xf.BeamBeamBiGaussian2D(
                other_beam_Sigma_11=1.,
                other_beam_Sigma_33=1.,
                other_beam_num_particles=0.,
                other_beam_q0=1.,
                other_beam_beta0=1.,
            ),
            xf.BeamBeamBiGaussian3D(
                slices_other_beam_zeta_center=[0],
                slices_other_beam_num_particles=[0],
                phi=0.,
                alpha=0,
                other_beam_q0=1.,
                slices_other_beam_Sigma_11=[1],
                slices_other_beam_Sigma_12=[0],
                slices_other_beam_Sigma_22=[0],
                slices_other_beam_Sigma_33=[1],
                slices_other_beam_Sigma_34=[0],
                slices_other_beam_Sigma_44=[0],
            ),
            # # Doesn't work because fieldmap in different buffer
            # xf.ElectronCloud(fieldmap=xf.TriCubicInterpolatedFieldMap(
            #     x_range=(0.,1.), nx=10,
            #     y_range=(0.,1.), ny=10,
            #     z_range=(0.,1.), nz=10
            # )),
            xf.ElectronLensInterpolated(
                x_range=(0.,1.), nx=10,
                y_range=(0.,1.), ny=10
            ),
            xf.SpaceCharge3D(
                x_range=(0.,1.), nx=10,
                y_range=(0.,1.), ny=10,
                z_range=(0.,1.), nz=10
            ),
            xc.BlackAbsorber(length=1),
            xc.EverestCollimator(length=1, material=xc.materials.Silicon),
            xc.EverestCrystal(length=1, material=xc.materials.SiliconCrystal),
            xt.LimitRect(),
            xt.LimitRacetrack(),
            xt.LimitEllipse(),
            # # not supported until per-particle block updated
            # xt.LimitPolygon(x_vertices=[0.,1.], y_vertices=[0.,1.]),
            xt.LimitRectEllipse(),
            xt.LongitudinalLimitRect()
    ]
    if set(default_element_classes) != set([ el.__class__ for el in default_elements]):
        raise ValueError("Not all elements in `default_classes` are represented in " \
                       + "`default_element_classes` or vice versa. Please fix default_tracker.py.")

    default_line = xt.Line(elements=default_elements)

    default_line.build_tracker(compile=True, use_prebuilt_kernels=False, **kwargs)
    default_config_hash = default_line.tracker._hashable_config()

    _default_tracker_cache['tracker'] = default_line.tracker
    _default_tracker_cache['config']  = default_config_hash

    return default_line.tracker, default_config_hash
