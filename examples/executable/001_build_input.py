import xtrack as xt
import xpart as xp
import xboinc as xb

# Simulation input
num_turns = 10
line = xt.Line(elements=[
    xt.Drift(length=1.0), xt.Multipole(knl=[1e-6]), xt.Drift(length=1.0)])
particles = xp.Particles(mass0=xp.PROTON_MASS_EV, p0c=7e12, x=[1e-3,2e-3,3e-3])

# Assemble data structure
xb.build_input_file(line=line, particles=particles, num_turns=num_turns)
