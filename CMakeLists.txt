cmake_minimum_required(VERSION 4.3)
project(stmk_shell)
add_executable(${PROJECT_NAME} tool/stmk_shell.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE stmk_sh)

add_subdirectory(src)
