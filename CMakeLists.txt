cmake_minimum_required(VERSION 3.10)  # Adjust version as needed
project(CircularBuffer C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Ensure Debug mode
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug, Release, etc.)" FORCE)
endif()

# Set compiler flags
set(CMAKE_C_FLAGS_DEBUG "-g")

add_executable(circular main.c circular.c)
