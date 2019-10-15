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
# Install header
#
install(DIRECTORY include/sepbit
        DESTINATION include)

#
# Install others
#
install(FILES LICENSE NOTICE README.md
        DESTINATION share/doc/sepbit/testhpp)

#
# CPack
#
set(CPACK_DEBIAN_PACKAGE_NAME "${PROJECT_NAME}")
set(CPACK_DEBIAN_PACKAGE_VERSION "${PROJECT_VERSION}")
set(CPACK_DEBIAN_PACKAGE_DESCRIPTION "${PROJECT_DESCRIPTION}")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER
    "Vitor Guia <contato@vitor.guia.nom.br>")
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.24-11)")
include(CPack)

#
# CTest
#
if(TEST)
  enable_testing()
  add_subdirectory(test)
  include(CTest)
endif()
