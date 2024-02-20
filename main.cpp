#include <iostream>

#include "math_operations.h"

int main()
{
  float num1{0}, num2{0};
  char symbol{'a'};
  float current_result{0};

  std::cout << "Enter a calculation: ";
  std::cin >> num1 >> symbol >> num2;
  current_result = MathOps::execute_calculation(num1, symbol, num2);

  while (1)
  {
    std::cout << "If you want to continue calculation for the current result '" << current_result
              << "', press 'c', if you want to exit, press 'e'." << std::endl;
    char next_action{'a'};
    std::cin >> next_action;
    if (next_action == 'c')
    {
      std::cout << "Please input the calculation symbol and number." << std::endl;
      std::cin >> symbol >> num2;
      current_result = MathOps::execute_calculation(current_result, symbol, num2);
    }
    else if (next_action == 'e')
    {
      break;
    }
  }

  return 0;
}
