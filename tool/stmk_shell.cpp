#include "stmk/commd_handler.hpp"
#include <stmk/stmk_sh.hpp>

int main(int argc, char *argv[]) {
  stmk::exec_args args = {
      .file_path = "test.txt",
  };
  stmk::exec((void *)(&args));
  return 0;
}
