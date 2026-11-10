#pragma once

//

/// @brief
class IEngineLoader {
public:
  virtual void load() = 0;
};

/// @brief
class EngineLoader final : public IEngineLoader {
public:
  void load() override {}
};
