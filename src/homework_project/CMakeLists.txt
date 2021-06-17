project (homework_project)

set (CMAKE_INCLUDE_CURRENT_DIR ON)

include(${CMAKE_CURRENT_SOURCE_DIR}/../protobuf_build/conanbuildinfo.cmake)
conan_basic_setup(TARGETS KEEP_RPATHS)
include_directories(/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/include)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

file (GLOB SRC_C *.cpp *.h)

add_executable(${PROJECT_NAME} ${SRC_C} ${UIs})

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SRC_C} ${SRC_UI})

target_link_libraries(${PROJECT_NAME} CONAN_PKG::protobuf Threads::Threads)
