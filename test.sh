#!/bin/bash
#? tape './run.sh <COMMAND>' in the main project dir to run your program

# Google test flags
FLAGS='-lgtest -lgtest_main'

# Build && run the test
cd bin/test && g++ test.cpp -o test ${FLAGS} && ./test