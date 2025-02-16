cmake_minimum_required(VERSION 3.10)  # Adjust version as needed
project(CircularBuffer C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(circular main.c circular.c)
