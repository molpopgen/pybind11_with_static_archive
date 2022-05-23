cmake_minimum_required(VERSION 2.8.12)
project(module)

include_directories(BEFORE ${module_SOURCE_DIR}/lib)

find_package(pybind11)
message(STATUS "Found pybind11: ${pybind11_VERSION}")

add_subdirectory(lib)
add_subdirectory(module)
