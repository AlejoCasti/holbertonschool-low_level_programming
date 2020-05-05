#!/bin/bash
wget -P /tmp https://github.com/AlejoCasti/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/libputs.so
export LD_PRELOAD=/tmp/libputs.so
