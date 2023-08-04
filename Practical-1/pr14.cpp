//Name: Bhavya Kachhadiya

//Eroll. No.: 220130318020 
#include <iostream>

using namespace std;

bool isPalindrome(int number) {
  int reverse_number = 0;
  int original_number = number;

  while (number > 0) {
    int digit = number % 10;
    reverse_number = reverse_number * 10 + digit;
    number = number / 10;
  }

  return (original_number == reverse_number);
}

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;

  bool is_palindrome = isPalindrome(number);

  if (is_palindrome) {
    cout << number << " is a palindrome." << endl;
  } else {
    cout << number << " is not a palindrome." << endl;
  }

  return 0;
}
