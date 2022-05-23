pybind11_add_module(module MODULE module.cc)
add_dependencies(module core)
target_link_libraries(module PRIVATE ${CMAKE_BINARY_DIR}/lib/libcore.a)

