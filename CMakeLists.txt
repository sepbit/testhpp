cmake_minimum_required(VERSION 3.7 FATAL_ERROR)
project(Testhpp
        VERSION 1.0.0
        DESCRIPTION "This is a simple library Header-Only Unit-Test for CPP"
        HOMEPAGE_URL "https://gitlab.com/sepbit/testhpp"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#
# gcov
#
option(TEST "build test" OFF)
if(TEST)
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "-coverage")
    endif()
endif()

#
# CPack
#
install(DIRECTORY include/sepbit
        DESTINATION include)
install(FILES LICENSE NOTICE README.md
        DESTINATION share/doc/sepbit/testhpp)
include(CPack)

#
# CTest
#
if(TEST)
  enable_testing()
  add_subdirectory(test)
  include(CTest)
endif()
