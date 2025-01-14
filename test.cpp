#include <float.h>

#include <cassert>
#include <iostream>

#include "math_operations.h"

void test_addition()
{
  assert(std::abs(MathOps::addition(2.0, 4.0) - 6.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::addition(10.0, 20.0) - 30.0) <= FLT_EPSILON);

  return;
}

void test_subtraction()
{
  assert(std::abs(MathOps::subtraction(2.0, 1.0) - 1.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::subtraction(10.0, 20.0) - (-10.0)) <= FLT_EPSILON);

  return;
}

void test_multiplication()
{
  assert(std::abs(MathOps::multiplication(2.0, 1.0) - 2.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::multiplication(10.0, 20.0) - 200.0) <= FLT_EPSILON);

  return;
}

void test_division()
{
  // 通常の除算のテスト
  assert(std::abs(MathOps::division(2.0, 1.0) - 2.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::division(10.0, 5.0) - 2.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::division(3.0, 2.0) - 1.5) <= FLT_EPSILON);

  // エラーメッセージの確認
  try
  {
    float result = MathOps::division(3.0, 0.0);
    assert(false);
  }
  catch (const std::runtime_error &e)
  {
    assert(std::string(e.what()) == "Division by zero");
  }
  return;
}

void test_sqrtroot()
{
  // 通常の平方根のテスト
  assert(std::abs(MathOps::sqrtroot(16.0) - 4.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::sqrtroot(0.0)) <= FLT_EPSILON);

  // エラーメッセージの確認
  try
  {
    float result = MathOps::sqrtroot(-1.0);
    assert(false);
  }
  catch (const std::runtime_error &e)
  {
    assert(std::string(e.what()) == "Negative value in the root.");
  }
  return;
}

void test_execute_calculation()
{
  assert(std::abs(MathOps::execute_calculation(4.0, '+', 2.0) - 6.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::execute_calculation(4.0, '-', 2.0) - 2.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::execute_calculation(4.0, '*', 2.0) - 8.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::execute_calculation(4.0, '/', 2.0) - 2.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::execute_calculation(4.0, 'r', 2.0) - 2.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::execute_calculation(4.0, '^', 2.0) - 16.0) <= FLT_EPSILON);
  try
  {
    float result = MathOps::execute_calculation(4.0, 'b', 2.0);
    assert(false);
  }
  catch (const std::runtime_error &e)
  {
    assert(std::string(e.what()) == "Input symbol is invalid.");
  }
  return;
}

void test_exponentiation()
{
  assert(std::abs(MathOps::exponentiation(2.0, 3.0) - 8.0) <= FLT_EPSILON);
  assert(std::abs(MathOps::exponentiation(2.0, 0.0) - 1.0) <= FLT_EPSILON);

  return;
}

int main()
{
  test_addition();
  test_subtraction();
  test_multiplication();
  test_division();
  test_sqrtroot();
  test_execute_calculation();
  test_exponentiation();

  std::cout << "Pass!" << std::endl;

  return 0;
}
