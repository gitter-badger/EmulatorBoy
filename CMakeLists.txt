cmake_minimum_required(VERSION 3.5)
project(EmulatorBoy)
set(EMULATORBOY_VERSION_MAJOR 1)
set(EMULATORBOY_VERSION_MINOR 0)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/modules")

add_subdirectory(${PROJECT_SOURCE_DIR}/src)