set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Werror -Wall -std=c++11")
file(GLOB_RECURSE SOURCE_FILES *.cpp)

add_executable(EmulatorBoy ${SOURCE_FILES})

# TODO: Add install commands
#install(TARGETS EmulatorBoy DESTINATION bin)
#install (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"
#        DESTINATION include)