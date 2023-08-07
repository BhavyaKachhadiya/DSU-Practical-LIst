#include <iostream>

using namespace std;

bool isArmstrongNumber(int number) {
  int original_number = number;
  int sum = 0;

  while (number > 0) {
    int digit = number % 10;
    sum += digit * digit * digit;
    number = number / 10;
  }

  return (sum == original_number);
}

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;

  bool is_armstrong = isArmstrongNumber(number);

  if (is_armstrong) {
    cout << number << " is an Armstrong number." << endl;
  } else {
    cout << number << " is not an Armstrong number." << endl;
  }
cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
  return 0;
}
