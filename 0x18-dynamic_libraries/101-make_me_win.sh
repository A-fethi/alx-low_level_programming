#!/bin/bash
wget -P /$PWD https://github.com/A-fethi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/inject.so
export LD_PRELOAD=/$PWD/inject.so
