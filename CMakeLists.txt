cmake_minimum_required(VERSION 3.21)
project(Final_Project C)

set(CMAKE_C_STANDARD 11)

add_executable(Final_Project
        FinalProject/converting.c
        FinalProject/fundamentals.c
        FinalProject/main.c
        FinalProject/manipulating.c
        FinalProject/tokenizing.c)
