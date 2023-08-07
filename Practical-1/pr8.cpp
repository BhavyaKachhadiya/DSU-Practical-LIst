#include <iostream>

using namespace std;

int main() {
  int principal, time, rate;
  float ci;

  cout << "Enter the principal: ";
  cin >> principal;

  cout << "Enter the time in years: ";
  cin >> time;

  cout << "Enter the rate of interest in %: ";
  cin >> rate;

  ci = principal * (1 + rate / 100) ^ time;

  cout << "The compound interest is: " << ci << endl;
cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
  return 0;
}
