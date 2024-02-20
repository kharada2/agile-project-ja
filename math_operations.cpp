#include "math_operations.h"

#include <stdexcept>

#include <cmath>

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
float exponentiation(float num1, float num2)
{
    return std::pow(num1, num2);
}
}  // namespace MathOps
