cmake_minimum_required (VERSION 3.7)
project (game-lancher CXX)

set (CMAKE_CXX_STANDARD 14)

file (GLOB_RECURSE HEADERS "${PROJECT_SOURCE_DIR}/src/include/*.h")
file (GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_executable (
    ${PROJECT_NAME}
    ${HEADERS}
    ${SOURCES}
)

target_include_directories (
    ${PROJECT_NAME} PRIVATE
    "${PROJECT_SOURCE_DIR}/src/include"
)

