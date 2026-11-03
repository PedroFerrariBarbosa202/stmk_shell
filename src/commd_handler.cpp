#include <stmk/error.hpp>
#include <stmk/stmk_sh.hpp>

#include <fstream>
#include <iostream>

void stmk::exec(void *_args) {
  exec_args args = *(exec_args *)(_args);

  // 1) open requested file
  // 2) read estabilish connection with host
  // 3) read byte from file
  // 4) dump byte into host

  std::ifstream fs(args.file_path);

  if (!fs.is_open()) {
    error::send_errno("failed to open file");
  }

  char chr;
  while (fs.get(chr)) {
    std::cout << chr;
  }
}
