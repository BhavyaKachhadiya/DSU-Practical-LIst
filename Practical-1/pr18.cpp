#include <iostream>

using namespace std;

int power(int base, int exponent) {
  int power_of_number = 1;

  for (int i = 0; i < exponent; i++) {
    power_of_number *= base;
  }

  return power_of_number;
}

int main() {
  int base, exponent;

  cout << "Enter the base: ";
  cin >> base;

  cout << "Enter the exponent: ";
  cin >> exponent;

  int power_of_number = power(base, exponent);

  cout << "The power of " << base << " ^ " << exponent << " is " << power_of_number << endl;
cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
  return 0;
}
