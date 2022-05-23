pybind11_add_module(module MODULE module.cc)
message(STATUS "dir = ${CMAKE_BINARY_DIR}")
target_link_libraries(module PRIVATE ${CMAKE_BINARY_DIR}/lib/libcore.a)

