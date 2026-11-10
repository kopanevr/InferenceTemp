#pragma once

//

/// @brief
class App final {
public:
  static App &getInstance() {
    static App instance{};
    return instance;
  }

  App(const App &) = delete;
  App &operator=(const App &) = delete;

  App(App &&) = delete;
  App &operator=(App &&) = delete;

  void exec();

  int exit();

private:
  App() = default;
  ~App() = default;
};
