#! /bin/bash

cmake -DCMAKE_TOOLCHAIN_FILE=toolchain.gcc.cmake .

make
