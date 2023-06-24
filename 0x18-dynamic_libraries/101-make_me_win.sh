#!/bin/bash
wget -P /tmp/ https://github.com/soukiitos/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libmake_me_win.so
export LD_PRELOAD=/tmp/libmake_me_win.so
