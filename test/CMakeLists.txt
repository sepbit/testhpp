cmake_minimum_required(VERSION 3.7)
project(test)

#
# example_test
#
add_executable(exampleTest exampleTest.cpp)
target_include_directories(exampleTest PUBLIC ${CMAKE_SOURCE_DIR}/include)
add_test(NAME exampleTest COMMAND exampleTest)
