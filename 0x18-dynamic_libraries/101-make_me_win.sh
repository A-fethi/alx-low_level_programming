#!/bin/bash
wget -P /alx-low_level_programming/0x18-dynamic_libraries https://github.com/A-fethi/alx-low_level_programming/tree/master/0x18-dynamic_libraries/inject.so
export LD_PRELOAD=/alx-low_level_programming/0x18-dynamic_libraries/inject.so
