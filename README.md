# XBOINC

## Python package for submitting track simulations in particle accelerators with BOINC system

## INSTRUCTIONS FOR WINDOWS:

### How to install boinc client/manager on Windows

Use the installed at: https://boinc.berkeley.edu/download.php


### Compile boinc api and examples from source on Windows

We use MSys2, in particular **MINGW64**

Follow the instruction at https://www.msys2.org to install MSYS2 and GCC.

Install git and python packages:
```
pacman -S git
pacman -Sy mingw-w64-x86_64-python-numpy
pacman -Sy mingw-w64-x86_64-python-scipy
pacman -Sy mingw-w64-x86_64-python-pandas
pacman -Sy mingw-w64-x86_64-python-pip
pacman -Sy mingw-w64-x86_64-python-wheel
pacman -Sy vim
```

#### Compile BOINC
```
pacman -S autotools
cd
git clone https://github.com/BOINC/boinc
cd boinc
export BOINC_DIR=$PWD
 
./_autosetup
 
./configure --disable-server --disable-client --disable-manager --disable-gui
# This one takes very long
 
make
# This also takes quite long
```

### Generate xboinc source and input files on windows

```
git clone https://github.com/xsuite/xobjects.git
git clone https://github.com/xsuite/xpart.git
git clone https://github.com/xsuite/xtrack.git
git clone https://github.com/xsuite/xfields.git
git clone https://github.com/xsuite/xboinc.git

pip install --no-deps --no-build-isolation -e xtrack
pip install --no-deps --no-build-isolation -e xobjects
pip install --no-deps --no-build-isolation -e xpart
pip install --no-deps --no-build-isolation -e xfields
pip install --no-deps --no-build-isolation -e xboinc
```

#### Test application


```bash
$ cd xboinc/examples/000_build_executable
$ python 000_build_executable.py
$ chmod +x 001msys2_compile_executable.sh
$ ./001msys2_compile_executable.sh
$ cd ../002_lhc
$ python 000_build_executable.py
$ python 001_build_input.py
$ cd ../003_boinc
$ export BOINC_DIR=/home/giadarol/Desktop/xsuite_packages/boinc
$ python 000_build_executable.py
$ make
$ cp ../002_lhc/xboinc_input.bin .
$ chmod +x xboinc_executable
$ ./xboinc_executable
```

#### Running the test application with boinc server
We still work in MSYS2 (MINGW64)

In order to have it working we needed to have the file structure in C:\PrgramData\Boinc

```
cd /c/ProgramData/BOINC
 cp ~/xsuite/xboinc/examples/003_boinc/client_state_save.xml .
```
then

```
nano account_test.xml 
```

write
```
<account>
    <master_url>http://test.test</master_url>
    <project_name>test_project</project_name>
</account>
```
then 
```nano cc_config.xml```
write
```
<cc_config>
    <options>
        <skip_cpu_benchmarks/>
        <unsigned_apps_ok/>
    </options>
</cc_config>
```
Then make folder structure
```
mkdir projects/test.test
cp ~/xsuite/xboinc/examples/003_boinc/xboinc_input.bin projects/test.test/input.bin
cp ~/xsuite/xboinc/examples/003_boinc/xboinc_executable.exe projects/test.test/
```

In one terminal:
`cp client_state_save.xml client_state.xml; ./../../Program\ Files/BOINC/boinc.exe`

In another:
`/c/Program\ Files/BOINC/boincmgr.exe`

