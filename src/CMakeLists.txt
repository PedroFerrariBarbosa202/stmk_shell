add_library(stmk_sh stmk_sh.cpp 
  commd_handler.cpp)

target_include_directories(stmk_sh
 PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)

