#include "app.h"

//

/// @brief
/// @param argc
/// @param argv
/// @return
int main(int argc, char **argv) {
  const auto &app = App::getInstance();

  app.exec();

  return app.exit();
}
