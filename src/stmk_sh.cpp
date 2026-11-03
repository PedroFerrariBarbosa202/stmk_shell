#include <stmk/stmk_sh.hpp>

void stmk::CommdHandler::commd_execute(CommdHandler::Commds commd, void *args) {
  handlers[static_cast<int>(commd)](args);
}

stmk::CommdHandler::Commds stmk::CommdHandler::parse_commd(std::string commd) {}
