cmake_minimum_required (VERSION 3.7)

project (CXX_dificult_moments)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

set (THREADS_PREFER_PTHREAD_FLAG ON)
find_package (Threads REQUIRED)

add_subdirectory (homework_project)

option (BUILD_TESTS "build tests?" ON)

if ( ${BUILD_TESTS} )
    add_subdirectory( tests )
endif()
