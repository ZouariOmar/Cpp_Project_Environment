#! Put this file in the "pkg" dir


# set the cmake min version (current - 3.29.3)
cmake_minimum_required(VERSION 3.29.3)

# set the project/app name
project(app)

# set the CMake C/C++ version
set(CMAKE_CXX_STANDARD 20) # For C: set(CMAKE_CX_STANDARD 99)

# Add the main window source files
set(SOURCES
  ../project/src/main.cpp
  ../project/src/lib.cpp
)

# Enable testing mode
enable_testing()

# Add the main window header files
set(HEADERS
  ../project/inc/inc.hpp
)

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})