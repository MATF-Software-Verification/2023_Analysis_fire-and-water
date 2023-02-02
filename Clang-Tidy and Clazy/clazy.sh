#!/usr/bin/bash

# Generate Compilation Database for Project ... (u Qt-u u okviru build kartice)
# pozicioniranje u odgovarajuci build folder i eventualno kopiranje main.cpp iz pocetnog foldera

clazy-standalone -p compile_commands.json main.cpp 2> ../../clangtidy_clazy.txt
