#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double km;
  cout << "Enter the distance in kilometers: ";
  cin >> km;

  // Convert km to cm
  double cm = km * 100000;
  cout << setw(10) << setfill(' ') << "cm: " << setprecision(20) << cm << endl;

  // Convert km to meter
  double m = km * 1000;
  cout << setw(10) << setfill(' ') << "m: " << setprecision(20) << m << endl;

  // Convert km to inch
  double inch = km * 39370;
  cout << setw(10) << setfill(' ') << "inch: " << setprecision(20) << inch << endl;

  // Convert km to feet
  double ft = km *  3281;
  cout << setw(10) << setfill(' ') << "ft: " << setprecision(20) << ft << endl;
cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
  return 0;
}
