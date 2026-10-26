cmake_minimum_required(VERSION 3.10)
project(project-name)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(tests)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(hello_world_test tests/hello_world_test.cpp)
target_link_libraries(hello_world_test gtest gtest_main)

add_test(NAME hello_world_test COMMAND hello_world_test)