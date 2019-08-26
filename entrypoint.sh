#!/bin/sh

g++ -std=c++11 -o TestBinary -fprofile-arcs -ftest-coverage test/test_index.cpp
./TestBinary
gcov -o . test/test_index.cpp