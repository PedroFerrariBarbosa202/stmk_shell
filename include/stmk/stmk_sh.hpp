#ifndef stmk_sh_HPP_
#define stmk_sh_HPP_

#include <stmk/commd_handler.hpp>
#include <string>

namespace stmk {

class CommdHandler {
  enum class Commds {
#define CMMD(cmmd) cmmd,
#include "../../utils/commds.inc"
#undef CMMD

    commd_handler_length,
  };

public:
  static void commd_execute(Commds commd, void *args);
  static Commds parse_commd(std::string commd);

private:
  static constexpr int num_handlers =
      static_cast<int>(Commds::commd_handler_length);

  using Handler = void (*)(void *);

  static constexpr Handler handlers[num_handlers] = {
#define CMMD(cmmd) cmmd,
#include "../../utils/commds.inc"
#undef CMMD
  };
};

} // namespace stmk

#endif // stmk_sh_HPP_
