#include <iostream>

using namespace std;

int main() {
  int a, b;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  cout << "Before swapping, a = " << a << " and b = " << b << endl;

  // Swap a and b
  int temp = a;
  a = b;
  b = temp;

  cout << "After swapping, a = " << a << " and b = " << b << endl;

  return 0;
}
