function(build_test library class)
  add_executable(test_${library}_${class} EXCLUDE_FROM_ALL ${library}/test_${class}.cpp)
  target_link_libraries(test_${library}_${class} ${library} ${ARGN} gmock_main)
  add_test(${library}::${class} test_${library}_${class})
  add_dependencies(check test_${library}_${class})
endfunction(build_test)

# Building a test is pretty easy...
# the args are build_test(LIBRARY, CLASS, [DEPENDENCY_LIBRARY], ...)
# it looks for test/LIBRARY/test_CLASS.cpp

include_directories(${PROJECT_SOURCE_DIR}/test)

add_custom_target(check
    COMMAND ${CMAKE_CTEST_COMMAND}
)

build_test(component adder)