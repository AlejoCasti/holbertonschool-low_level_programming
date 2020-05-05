#!/bin/bash
wget -P /tmp https://github.com/AlejoCasti/holbertonschool-low_level_programming.git/0x18-dynamic_libraries/raw/master/libputs.so
export LD_PRELOAD=/tmp/libputs.so
