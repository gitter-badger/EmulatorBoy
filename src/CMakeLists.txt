include_directories(${PROJECT_SOURCE_DIR}/include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Werror -Wall -std=c++11")
file(GLOB_RECURSE SOURCE_FILES *.cpp)

add_executable(EmulatorBoy ${SOURCE_FILES})
