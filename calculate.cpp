#include <iostream>

double calculate(double a, double b, char op)
{
  switch (op)
  {
  case '+':
    return a + b;

  case '-':
    return a - b;

  case '*':
    return a * b;

  case '/':
    if (b != 0)
    {
      return a / b;
    }
    else
    {
      return 0;
    }
  default:
    return 0;
  }
}