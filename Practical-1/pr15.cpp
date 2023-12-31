#include <iostream>

using namespace std;

bool isPrime(int number) {
  if (number <= 1) {
    return false;
  }

  for (int i = 2; i * i <= number; i++) {
    if (number % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;

  bool is_prime = isPrime(number);

  if (is_prime) {
    cout << number << " is a prime number." << endl;
  } else {
    cout << number << " is not a prime number." << endl;
  }

cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
  return 0;
}
