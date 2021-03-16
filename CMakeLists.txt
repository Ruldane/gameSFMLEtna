cmake_minimum_required(VERSION 3.19)
project(game)

set(CMAKE_CXX_STANDARD 14)

add_executable(game main.cpp Game.cpp Game.hpp)

target_link_libraries(game PUBLIC -lsfml-system -lsfml-graphics -lsfml-window)