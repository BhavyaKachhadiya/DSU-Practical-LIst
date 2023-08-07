#include <iostream>

using namespace std;

int factorial(int number) {
  int factorial = 1;

  for (int i = 1; i <= number; i++) {
    factorial *= i;
  }

  return factorial;
}

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;

  int factorial_of_number = factorial(number);

  cout << "The factorial of " << number << " is " << factorial_of_number << endl;
cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
  return 0;
}
