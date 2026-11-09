#pragma once

//

#include <iostream>

//

#include "NvInfer.h"

//

/// @brief 
class Logger : public nvinfer1::ILogger {
public:
  explicit Logger(Severity severity = Severity::kWARNING)
      : reportableSeverity(severity) {}

  void log(Severity severity, AsciiChar const *msg) override {
    if (severity <= reportableSeverity) {
      std::cout << msg << std::endl;
    }
  }

  Severity reportableSeverity;
}
