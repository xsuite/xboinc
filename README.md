# XBOINC

## Python package for submitting track simulations in particle accelerators with BOINC system

## INSTRUCTIONS FOR WINDOWS:

### How to install boinc client/manager on Windows

Use the installer at: https://boinc.berkeley.edu/download.php


### Compile boinc api and examples from source on Windows

We use MSys2, in particular **MINGW64**

Follow the instruction at https://www.msys2.org to install MSYS2 and GCC:
```
pacman -S mingw-w64-x86_64-gcc
pacman -Suy
pacman -Suy  # you need indeed twice!
```

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
cd 
mkdir xsuite_packages
cd xsuite_packages
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

#### Compile and generate input


```bash
cd xboinc/examples/000_build_executable
python 000_build_executable.py
bash 001msys2_compile_executable.sh
cd ../002_lhc
python 001_build_input.py
cd ../003_boinc
echo $BOINC_DIR # Check if points into the BOINC source directory 
python 000_build_executable.py
make
```

#### Run/test the executable
```
$ cp ../002_lhc/xboinc_input.bin .
$ chmod +x xboinc_executable
$ ./xboinc_executable
```

#### Running the test application with boinc server
We still work in MSYS2 (MINGW64)

In order to have it working we needed to have the file structure in C:\PrgramData\Boinc

```
cd /c/ProgramData/BOINC # This in WINDOWS is hidden
cp ~/xsuite_packages/xboinc/examples/003_boinc/client_state_save.xml .
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
cp ~/xsuite_packages/xboinc/examples/002_lhc/xboinc_input.bin projects/test.test/input.bin
cp ~/xsuite_packages/xboinc/examples/003_boinc/xboinc_executable.exe projects/test.test/xboinc_executable
```

In one terminal:
`cp client_state_save.xml client_state.xml; ./../../Program\ Files/BOINC/boinc.exe`

In another:
`/c/Program\ Files/BOINC/boincmgr.exe`

In case of problems stop boing client in the status bar:


<img width="427" alt="image" src="https://user-images.githubusercontent.com/8049893/191972091-13fee31a-9dc8-459e-9f3f-3224c09bec47.png">


The result are saved in projects/test.test/output.bin`
