#include "EngineLoader.hpp"

//

#include <fstream>

//

/// @brief
/// @param fileName
/// @return
bool EngineLoader::load(const std::string &fileName) {
  std::ifstream file(fileName, std::ios::binary);
  if (file.good()) {
    return false;
  }


}
