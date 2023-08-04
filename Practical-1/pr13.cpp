#include <iostream>

using namespace std;

int sum_of_first_n_natural_numbers(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  return sum;
}

int main() {
  int n;

  cout << "Enter the value of n: ";
  cin >> n;

  int sum = sum_of_first_n_natural_numbers(n);

  cout << "The sum of first " << n << " natural numbers is: " << sum << endl;

  return 0;
}