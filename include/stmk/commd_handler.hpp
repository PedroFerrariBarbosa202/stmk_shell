#ifndef commd_handler_HPP_
#define commd_handler_HPP_

#include <string>

namespace stmk {

typedef struct exec_args {
  std::string file_path;
} exec_args;
void exec(void *_args);

} // namespace stmk

#endif // commd_handler_HPP_
