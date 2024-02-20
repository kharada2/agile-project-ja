#include <iostream>

#include "math_operations.h"

int main() {
  float num1{0}, num2{0};
  char symbol{'a'};
  float out{0};

  std::cout << "Enter a calculation: ";
  std::cin >> num1 >> symbol >> num2;

  if (symbol == '+') {
    out = MathOps::addition(num1, num2);
  } else if (symbol == '-') {
    out = MathOps::subtraction(num1, num2);
  } else if (symbol == '*') {
    out = MathOps::multiplication(num1, num2);
  } else if (symbol == '/') {
    out = MathOps::division(num1, num2);
  } else if (symbol == '^'){
    out = MathOps::exponentiation(num1, num2);
  } else {
    std::cout << "Input is invalid." << std::endl;
  }

  std::cout << "Result: " << out << std::endl;

  return 0;
}
