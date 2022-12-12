import xtrack as xt
import xfields as xf
import xobjects as xo

# Dummy line containing all supported element types
default_line = xt.Line(elements=[
    xt.Drift(length=1.0),
    xt.Multipole(knl=[0]),
    xt.ReferenceEnergyIncrease(),
    xt.Cavity(),
    xt.XYShift(),
    xt.Elens(),
    xt.Wire(),
    xt.SRotation(),
    xt.RFMultipole(knl=[0], pn=[0]),
    xt.DipoleEdge(),
    xt.LinearTransferMatrix(),
    # xt.EnergyChange(), # not working!!!
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
    #xf.SpaceChargeBiGaussian(
    #    longitudinal_profile=xf.LongitudinalProfileQGaussian(
    #        number_of_particles=0, sigma_z=1)
    #),
])

def get_default_tracker(_context=None, compile=False):
    """
    Returns a default tracker object.
    """
    if _context is None:
        _context = xo.ContextCpu()
    return xt.Tracker(line=default_line, _context=_context, compile=compile)
