#!/bin/bash
gcc -shared -o liball.so *.c -fPIC
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
