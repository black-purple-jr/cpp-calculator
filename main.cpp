#include <iostream>
using namespace std;

double calculate(double a, double b, char op);

int main()
{
  cout << "This is a C++ calculator program" << endl;
  cout << "------------- START -------------" << endl;

  char operation;
  cout << "Choose the operation you want from (+ - * /) : ";
  cin >> operation;

  cout << "Enter the first number : ";
  double first_number;
  cin >> first_number;

  cout << "Enter the second number : ";
  double second_number;
  cin >> second_number;

  double result = calculate(first_number, second_number, operation);

  if (result == 0 && operation == '/' && second_number == 0){
    cout << "Error : You can't divide by 0" << endl;
  }
  else if (result == 0 && (operation != '+' || operation != '-' || operation != '*' || operation != '/')){
    cout << "Error : Invalid operation" << endl;
  }
  else{
    if (operation == '+' || operation == '-' || operation == '/'){
    cout << "The result of " << first_number << " " << operation << " " << second_number << " is : " << result << endl;
    } else if (operation == '*'){
      cout << "The result of " << first_number << " x " << second_number << " is : " << result << endl;
    }
  }
  cout << "------------- END -------------" << endl;
  return 0;
}