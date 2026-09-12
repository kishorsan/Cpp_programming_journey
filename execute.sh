#!/bin/bash

# Step 1: Compile
g++ $1 -o a.exe

# Setp 2: Check if compilation is successful
if [ $? -eq 0 ]; then
    echo "Compilation successful!"

    ./a.exe
else
    echo "Compilation failed"
fi