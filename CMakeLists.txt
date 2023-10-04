cmake_minimum_required(VERSION 3.0)
project(MultiverseCards)

find_package(SFML 2.6 COMPONENTS Graphics Network System Window REQUIRED)

add_executable(MultiverseCards main.cpp)

target_link_libraries(MultiverseCards sfml-graphics sfml-network sfml-system sfml-window)