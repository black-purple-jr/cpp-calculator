double calculate(double a, double b, char op)
{
  switch (op)
  {
  case '+':
    return a + b;
    break;

  case '-':
    return a - b;
    break;

  case '*':
    return a * b;
    break;

  case '/':
    if (b != 0)
    {
      return a / b;
      break;
    }
    else
    {
      return 0;
      break;
    }
  default:
    return 0;
    break;
  }
}