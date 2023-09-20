#include <iostream>
using namespace std;
void area(float r, const float pi=3.14)
{
    cout << "Area of Circle :: " << pi*r*r;
}
int main()
{
    int r;
    cout<<"Enter Radius of Circle :: ";
    cin>>r;
    area(r);
    cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}