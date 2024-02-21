#include "math_operations.h"

#include <stdexcept>
#include <math.h>
#include <iostream>

namespace MathOps
{
  float addition(float num1, float num2) { return num1 + num2; }
  float subtraction(float num1, float num2) { return num1 - num2; }
  float multiplication(float num1, float num2) { return num1 * num2; }
  float division(float num1, float num2)
  {
    if (num2 == 0)
    {
      throw std::runtime_error("Division by zero");
    }
    return num1 / num2;
  }

  float sqrtroot(float num1)
  {
    if (num1 < 0.0)
    {
      throw std::runtime_error("Negative value in the root.");
    }
    return sqrt(num1);
  }

  float exponentiation(float num1, float num2)
  {
    return std::pow(num1, num2);
  }

  float execute_calculation(float num1, char symbol, float num2)
  {
    float out{0};
    if (symbol == '+')
    {
      out = addition(num1, num2);
    }
    else if (symbol == '-')
    {
      out = subtraction(num1, num2);
    }
    else if (symbol == '*')
    {
      out = multiplication(num1, num2);
    }
    else if (symbol == '/')
    {
      out = division(num1, num2);
    }
    else if (symbol == 'r')
    {
      out = sqrtroot(num1);
    }
    else if (symbol == '^')
    {
      out = exponentiation(num1, num2);
    }
    else
    {
      throw std::runtime_error("Input symbol is invalid.");
    }
    return out;
  }
} // namespace MathOps
