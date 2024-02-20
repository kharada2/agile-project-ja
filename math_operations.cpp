#include "math_operations.h"

#include <stdexcept>
#include <math.h>

namespace MathOps {
float addition(float num1, float num2) { return num1 + num2; }
float subtraction(float num1, float num2) { return num1 - num2; }
float multiplication(float num1, float num2) { return num1 * num2; }
float division(float num1, float num2) {
  if (num2 == 0) {
    throw std::runtime_error("Division by zero");
  }
  return num1 / num2;
}

float sqrtroot(float num1) {
  if(num1 < 0.0) {
    throw std::runtime_error("Negative value in the root.");
  }
  return sqrt(num1);
}

}  // namespace MathOps
