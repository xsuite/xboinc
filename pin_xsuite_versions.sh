#!/bin/bash

# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2023.                 #
# ######################################### #

# Get list op modules to pin
cd xboinc
modules=$(python -c 'from general import __xsuite__versions__; print(" ".join(__xsuite__versions__.keys()))')
if [[ "$modules" == "" ]]
then
    echo "Could not retrieve list of xsuite modules to pin!"
    exit 1
fi
cd ..

# Check the versions to be pinned
for mod in $modules
do
    version=$(python -c 'import '$mod'; print('$mod'.__version__)')
    if [[ "$version" == "" ]]
    then
        echo "Could not retrieve version for "$mod
        exit 1
    fi
    echo "Will pin ${mod} to $version"
done

read -n 1 -p "Press y to continue (or any other key to cancel): " answer
case ${answer:0:1} in
    y|Y )
        echo
    ;;
    * )
        echo "Cancelled."
        exit 1
    ;;
esac

# Pin each of them
for mod in $modules
do
    version=$(python -c 'import '$mod'; print('$mod'.__version__)')
    if [[ "$version" == "" ]]
    then
        echo "Could not retrieve version for "$mod
        exit 1
    fi
    sed -i "s/\('"${mod}"' *:\).*/\1 '"${version}"',/"  xboinc/general.py
    sed -i "s/\('"${mod}"' *:\).*/\1 '"${version}"',/"  tests/test_00_version.py
    sed -i "s/\("${mod}" *=\).*/\1 '=="${version}"'/"   pyproject.toml
done

exit 0
