cmake_minimum_required(VERSION 4.0)
project(sudoku_c C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(sudoku_c
        src/draw.c
        src/draw.h
        src/generator.c
        src/generator.h
        src/grid.c
        src/grid.h
        src/input.c
        src/input.h
        src/main.c
        src/sudoku.c
        src/sudoku.h)