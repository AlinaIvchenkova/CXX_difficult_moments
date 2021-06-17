project (tests)

enable_testing()
find_package(GTest REQUIRED)

file (GLOB SRC_C *.cpp)
source_group (TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SRC_C})

add_executable (${PROJECT_NAME} ${SRC_C})

add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

#target_link_libraries(${PROJECT_NAME} GTest::gtest)
