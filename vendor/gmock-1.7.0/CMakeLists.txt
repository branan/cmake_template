find_package(Threads)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gtest)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_library(gmock_main STATIC EXCLUDE_FROM_ALL gtest/src/gtest-all.cc src/gmock-all.cc src/gmock_main.cc)
target_link_libraries(gmock_main ${CMAKE_THREAD_LIBS_INIT})