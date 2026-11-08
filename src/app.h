#pragma once

//

/// @brief
class App final {
public:
  static App &getInstance() {
    static App instance{};
    return instance;
  }

  void run() {}

private:
  App() = default;

};
