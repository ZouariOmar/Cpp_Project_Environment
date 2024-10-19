#!/bin/bash
#? tape './run.sh <COMMAND>' in the main project dir to run your program

#* Check if an argument is provided
if [ -z "$1" ]; then
  echo "No command provided. Usage: ./run.sh <COMMAND>"
  exit 1
fi

#* clean & build & run the old excitable files
cd bin/build && $1 clean && $1 && ./app
