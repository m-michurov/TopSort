cmake_minimum_required(VERSION 3.12)
project(TopSort C)

set(CMAKE_C_STANDARD 11)

add_executable(TopSort main.c definitions.h topsort.c topsort.h thecoolermalloc.h thecoolermalloc.c)