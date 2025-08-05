cmake_minimum_required(VERSION 3.10)
project(QuantaQuilida)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(QuantaQuilida
    src/main.cpp
    src/FactChecker.cpp
    src/BiasAnalyzer.cpp
    src/Reporting.cpp
)

enable_testing()

add_subdirectory(tests)
