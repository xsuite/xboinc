from setuptools import setup, find_packages, Extension

#######################################
# Prepare list of compiled extensions #
#######################################

extensions = []


#########
# Setup #
#########

setup(
    name='xboinc',
    version='0.0.0',
    description='Xsuite boinc interface',
    url='https://github.com/xsuite/xboinc',
    author='G. Iadarola',
    packages=find_packages(),
    ext_modules = extensions,
    include_package_data=True,
    install_requires=[
        'numpy>=1.0',
        'scipy',
        'xobjects',
        'xpart',
        'xdeps',
        'xtrack'
        ]
    )
