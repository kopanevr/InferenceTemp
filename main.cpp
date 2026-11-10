#include "App.hpp"

//

/// @brief
/// @param argc
/// @param argv
/// @return
int main(int argc, char **argv) {
  auto &app = App::getInstance();

  app.exec();

  return app.exit();
}
