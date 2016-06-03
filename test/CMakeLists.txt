set(PROJECT_TEST_NAME ${PROJECT_NAME}_Test)

find_package(GTest REQUIRED)
if (GTEST_FOUND)
    include_directories(${GTEST_INCLUDE_DIRS})

    file(GLOB TEST_SRC_FILES ${PROJECT_TEST_DIR}/*.cpp)
    add_executable(${PROJECT_TEST_NAME} ${TEST_SRC_FILES})
    target_link_libraries(${PROJECT_TEST_NAME} GTest::GTest GTest::Main)

    add_test(UnitTests ${PROJECT_TEST_NAME})
endif()