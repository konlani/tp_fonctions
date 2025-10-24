cmake_minimum_required(VERSION 3.0)
project(tp_fonctions C)

set(CMAKE_C_STANDARD 11)

add_executable(exo_1005 1005.c
        rectangle.c
        rectangle.h
        insta.c
        insta.h)

add_executable(exo_1007 1007.c
        distributeur.c
        distributeur.h)

add_executable(exo_1008 1008.c)
