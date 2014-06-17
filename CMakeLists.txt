cmake_minimum_required(VERSION 2.8.0)
project(template)
enable_testing()

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/vendor/gmock-1.7.0/include/)
include_directories(${PROJECT_SOURCE_DIR}/vendor/gmock-1.7.0/gtest/include/)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(vendor/gmock-1.7.0)

# add_TMPL_library adds all our warning options. We don't set these
# globally because then gtest spews tons of crap
function(add_TMPL_library name)
    add_library(${name} STATIC ${ARGN})
    set_target_properties(${name} PROPERTIES COMPILE_FLAGS "-Wall -Wextra")
endfunction(add_TMPL_library)

add_subdirectory(test)
add_subdirectory(component)

add_executable(template main.cpp)
target_link_libraries(template component)