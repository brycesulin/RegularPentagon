cmake_minimum_required(VERSION 3.9)
project(RegularPentagon)

set(CMAKE_CXX_STANDARD 11)

add_executable(RegularPentagon regularpentagon.cpp regularpentagon.h geometricobject.h geomain.cpp geometricobject.cpp)