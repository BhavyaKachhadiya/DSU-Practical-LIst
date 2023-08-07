#include <iostream>

using namespace std;

int main() {
  int principal, time, rate;
  float si;

  cout << "Enter the principal: ";
  cin >> principal;

  cout << "Enter the time in years: ";
  cin >> time;

  cout << "Enter the rate of interest in %: ";
  cin >> rate;

  si = (principal * time * rate) / 100;

  cout << "The simple interest is: " << si << endl;
cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
  return 0;
}
