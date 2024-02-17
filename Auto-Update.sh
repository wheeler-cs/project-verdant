#!/bin/bash

# Script used to automatically generate a new README.md after every compile. This saves me the trouble of having to
# manually adjust the values whenever a new version is built, so everything in the repo stays up to date... hopefully.
# This is a nasty, nasty script that is entirely unmaintainable and incredible hard to read. I hate bash scripting...
#
# In addition to what the repository requires to build the game, this script requires the following additional packages:
#   head
#   tail
#   tr
#   awk
#   sha1sum
# A lot of these (if not all of them) probably come pre-installed on a Linux distribution.

ROM_NAME="verdant.gba"
ELF_NAME="verdant.elf"

# Generate heading
echo "# Project Verdant" > README.md
echo "" >> README.md
echo "A modification of Pokemon Emerald that introduces a variety of new content and QoL changes." >> README.md
echo "" >> README.md
echo "To view a roadmap of planned features, checkout out [roadmap.md](docs/roadmap.md)." >> README.md
echo "" >> README.md
echo "To set up the repository, see [INSTALL.md](INSTALL.md)." >> README.md
echo "" >> README.md

# Generate ROM memory table and hash value
echo "## ROM Information" >> README.md
echo "" >> README.md
# Table heading
echo "| **Memory Region** | **Used Size** | **Region Size** | **% Used** |" >> README.md
echo "|-|-|-|-|" >> README.md
# Extract memory usage, sanitize it, then finally format it
MEMORY=$(make $ELF_NAME | tail -n 4 | head -n 3)
MEMORY=$(echo $MEMORY | tr -d :)
# Split the EWRAM into fields and assemble string
EWRAM=$(echo $MEMORY | awk -F'% ' '{print $1}')
EWRAM_ARRAY=($(echo "$EWRAM" | tr ' ' '\n'))
echo "| ${EWRAM_ARRAY[0]} | ${EWRAM_ARRAY[1]} ${EWRAM_ARRAY[2]} | ${EWRAM_ARRAY[3]} ${EWRAM_ARRAY[4]} | ${EWRAM_ARRAY[5]}% |" >> README.md
# Split the IWRAM into fields and assemble string
IWRAM=$(echo $MEMORY | awk -F'% ' '{print $2}')
IWRAM_ARRAY=($(echo "$IWRAM" | tr ' ' '\n'))
echo "| ${IWRAM_ARRAY[0]} | ${IWRAM_ARRAY[1]} ${IWRAM_ARRAY[2]} | ${IWRAM_ARRAY[3]} ${IWRAM_ARRAY[4]} | ${IWRAM_ARRAY[5]}% |" >> README.md
# Split the ROM into fields and assemble string
ROM=$(echo $MEMORY | awk -F'% ' '{print $3}')
ROM_ARRAY=($(echo "$ROM" | tr ' ' '\n'))
echo "| ${ROM_ARRAY[0]} | ${ROM_ARRAY[1]} ${ROM_ARRAY[2]} | ${ROM_ARRAY[3]} ${ROM_ARRAY[4]} | ${ROM_ARRAY[5]} |" >> README.md
echo "" >> README.md
# Generate checksum and version information for game for validation
SHA=$(sha1sum $ROM_NAME | awk -F" ${ROM_NAME}" '{print $1}')
SHA=$(echo $SHA | tr -d ' ') # Delete trailing space
echo "**${ROM_NAME}** _v$1_  - \`sha1: ${SHA}\`" >> README.md
echo "" >> README.md

# Housekeeping stuff
echo "## See Also" >> README.md
echo "[Emerald Reduced](https://github.com/wheeler-cs/emerald-reduced): Upstream for project verdant that attempts to reduce the codebase size of the orignal game." >> README.md
echo "" >> README.md
echo "[Pokémon Emerald](https://github.com/pret/pokeemerald): The Pokémon Emerald decompilation project." >> README.md
