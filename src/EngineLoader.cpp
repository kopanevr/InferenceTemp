#include "EngineLoader.hpp"

//

#include <fstream>
#include <vector>

//

/// @brief
/// @param fileName
/// @return
bool EngineLoader::load(const std::string &fileName) {
  std::ifstream file(fileName, std::ios::binary);
  if (file.good()) {
    return false;
  }

  file.seekg(0, std::ios::end);
  const auto size = file.tellg();
  file.seekg(0, std::ios::beg);

  std::vector<char> buffer(size);
}
