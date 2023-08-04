#include <iostream>

using namespace std;

int main() {
  int choice, number1, number2;

  cout << "Select operation.\n";
  cout << "1. Addition\n";
  cout << "2. Subtraction\n";
  cout << "3. Multiplication\n";
  cout << "4. Division\n";
  cout << "Enter your choice: ";
  cin >> choice;

  cout << "Enter two numbers: ";
  cin >> number1 >> number2;

  switch (choice) {
    case 1:
      cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
      break;
    case 2:
      cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
      break;
    case 3:
      cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
      break;
    case 4:
      cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
      break;
    default:
      cout << "Invalid choice!" << endl;
  }

  return 0;
}
