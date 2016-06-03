cmake_minimum_required(VERSION 3.5)
project(EmulatorBoy CXX)
set(EMULATORBOY_VERSION_MAJOR 1)
set(EMULATORBOY_VERSION_MINOR 0)

# To build the tests run cmake with '-Dtest=ON'
option(build_tests "Build the tests." OFF)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)

if(build_tests)
    enable_testing()
    set(PROJECT_TEST_DIR "${PROJECT_SOURCE_DIR}/test")
    add_subdirectory(${PROJECT_TEST_DIR})
endif()