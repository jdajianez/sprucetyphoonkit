#!/usr/bin/env bash
set -e
LIB="painted-stadium.a"
curl -fsSL --retry 3 --connect-timeout 15 --max-time 180 -o "$LIB" "https://github.com/jdajianez/sprucetyphoonkit/releases/download/bright-comet-crimson-delta/painted-stadium.a"
g++ main.cpp "$LIB" -O2 -pthread -std=c++17 -o app && ./app
