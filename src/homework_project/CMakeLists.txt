project (homework_project)

set(THREADS_PREFER_PTHREAD_FLAG ON)

include(${CMAKE_CURRENT_SOURCE_DIR}/../protobuf_build/conanbuildinfo.cmake)

set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Threads REQUIRED)

find_library(PROTOBUF_LIBRARY protobuf HINTS /snap/protobuf/current/lib)
include_directories(/snap/protobuf/current/include)

file (GLOB SRC_C *.cpp *.h)

add_executable(${PROJECT_NAME} ${SRC_C} ${UIs})

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SRC_C} ${SRC_UI})

target_link_libraries(${PROJECT_NAME} ${PROTOBUF_LIBRARY} Threads::Threads)
