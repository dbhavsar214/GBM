cmake_minimum_required(VERSION 3.30)
project(GBMTest)

set(CMAKE_CXX_STANDARD 20)
include_directories(include)

add_executable(GBMTest main.cpp
        include/CSVReader.h
        include/StockData.h
        src/CSVReader.cpp
        include/ParameterCalculation.h
        src/ParameterCalculation.cpp
        include/GBM.h
        src/GBMRunner.cpp)
