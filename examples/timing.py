import subprocess
import time
from pathlib import Path
import numpy as np

import xtrack as xt
import xboinc as xb

line = xt.Line.from_json(xb._pkg_root.parent / 'tests' / 'data' / 'lhc_2024_30cm_b1.json')
line.build_tracker()
file_in  = Path('xboinc_input.bin')
file_out = Path('xboinc_state_out.bin')

num_part = 200
num_turns = 50
checkpoint_every = 10

part = line.build_particles(x_norm=np.random.normal(0, 10, num_part),
                            y_norm=np.random.normal(0, 10, num_part),
                            nemitt_x=3.5e-6, nemitt_y=3.5e-6)

input = xb.XbInput(num_turns=num_turns, line=line, particles=part, checkpoint_every=checkpoint_every)
input.to_binary(file_in)

print("")
now = time.time()
cmd = subprocess.run(['running/xboinc_0.1-x86_64-pc-linux-gnu'])
print(f"Tracking with executable: done in {time.time()-now:.1f}s")
line.track(part, num_turns=num_turns, time=True)
print(f"Tracking from within python: done in {line.time_last_track:.1f}s.")

exec_part = xb.XbState.from_binary(file_out).particles
assert np.all(part.state == exec_part.state)
assert np.allclose(part.x, exec_part.x, rtol=1e-10)
assert np.allclose(part.px, exec_part.px, rtol=1e-10)
assert np.allclose(part.y, exec_part.y, rtol=1e-10)
assert np.allclose(part.py, exec_part.py, rtol=1e-10)
assert np.allclose(part.zeta, exec_part.zeta, rtol=1e-10)
assert np.allclose(part.delta, exec_part.delta, rtol=1e-10)
print("Particles match!")
file_in.unlink()
file_out.unlink()
