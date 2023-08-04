//Name: Bhavya Kachhadiya

//Eroll. No.: 220130318020 
#include <iostream>

using namespace std;

int fibonacci(int number) {
  if (number == 0 || number == 1) {
    return number;
  } else {
    return fibonacci(number - 1) + fibonacci(number - 2);
  }
}

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;

  int fibonacci_number = fibonacci(number);

  cout << "The Fibonacci number for " << number << " is " << fibonacci_number << endl;

  return 0;
}
