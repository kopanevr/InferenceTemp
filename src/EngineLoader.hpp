#pragma once

//

#include <string>

//

/// @brief
class IEngineLoader {
public:
  virtual bool load(const std::string &fileName) = 0;
};

/// @brief
class EngineLoader final : public IEngineLoader {
public:
  bool load(const std::string &fileName) override;
};
