#!/bin/bash

# Script is used to automatcally install Poryscript so `.pory` script files are properly "compiled" in the `.inc` files
# needed by Project Verdant. This specifically pulls the Linux version from GitHub and installs it in the
# `tools/poryscript` directory.
#
# The following packages and tools are needed for this script:
#    wget
#    unzip
# If these are not installed on your system, they should be easily obtainable from your package manager.

# TODO: Make this handle ARM architecture, as Poryscript only has x86 builds...

# Make the Poryscript tooling directory if it doesn't exist
if [ ! -d "tools/poryscript" ]; then
    mkdir "tools/poryscript"
# Otherwise delete the old version in the directory
else
    rm tools/poryscript/*
fi

# Pull the latest release binary from GitHub
wget -q https://github.com/huderlem/poryscript/releases/latest/download/poryscript-linux.zip

# Extract Poryscripts files to the tooling directory
unzip -j -o -qq "poryscript-linux.zip" -d "tools/poryscript" > /dev/null

# Clean up by removing the "releases" zip
rm "poryscript-linux.zip"
echo "Poryscript installation complete!"
