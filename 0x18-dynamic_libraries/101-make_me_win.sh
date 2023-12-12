#!/bin/bash
wget -P .. https://raw.githubusercontent.com/ikettee/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga1.so
export LD_PRELOAD="$PWD/../libgiga1.so"
