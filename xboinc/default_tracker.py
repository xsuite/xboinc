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
    xf.BeamBeamBiGaussian2D(beta0=1),
    xf.BeamBeamBiGaussian3D(
        N_part_per_slice=[0],
        x_slices_star=[0],
        y_slices_star=[0],
        sigma_slices_star=[0]),
    xf.SpaceChargeBiGaussian(
        longitudinal_profile=xf.LongitudinalProfileQGaussian(
            number_of_particles=0, sigma_z=1)
    ),
])

def get_default_tracker(_context=None, compile=False):
    """
    Returns a default tracker object.
    """
    if _context is None:
        _context = xo.ContextCpu()
    return xt.Tracker(line=default_line, _context=_context, compile=compile)
