set(SOURCE_FILES lib.h lib.cc)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
add_library(core STATIC ${SOURCE_FILES})
# set_target_properties(core PROPERTIES library_output_directory ${CMAKE_BUILD_DIRECTORY}/lib)
