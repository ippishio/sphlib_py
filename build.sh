#!/bin/bash
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) src/wrapper.cpp -o build/sphlib_py$(python3-config --extension-suffix) -L sphlib_py/src/c/ -lsph