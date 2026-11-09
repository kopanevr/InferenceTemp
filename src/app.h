#pragma once

//

/// @brief
class App final {
public:
  static App &getInstance() {
    static App instance{};
    return instance;
  }

  void exec() {}

  void exit() {}

private:
  App() = default;

};
