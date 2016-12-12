cmake_minimum_required(VERSION 3.6)
project(lista_5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp figura.cpp figura.h kolo.cpp kolo.h kwadrat.cpp kwadrat.h prostakat.cpp prostakat.h trapez.cpp trapez.h TempClass.cpp TempClass.h trProst.cpp trProst.h)
add_executable(lista_5 ${SOURCE_FILES})