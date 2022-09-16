# XBOINC

## Python package for submitting track simulations in particle accelerators with BOINC system

## INSTRUCTIONS:
```
$ git clone git@github.com:xsuite/xsuite.git
$ pip install -e xboinc
```

## Test application

```bash
$ cd xboinc/examples/000_build_executable
$ python 000_build_executable.py
$ chmod +x 001msys2_compile_executable.sh
$ ./001msys2_compile_executable.sh
$ cd ../002_lhc
$ python 000_build_executable.py
$ python 001_build_input.py
$ cd ../003_boinc
$ python 000_build_executable.py
$ make
$ cp ../002_lhc/xboinc_input.bin .
$ chmod +x xboinc_executable
$ ./xboinc_executable
```
