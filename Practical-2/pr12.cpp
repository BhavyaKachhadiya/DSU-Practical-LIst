#include <iostream>
using namespace std;
void area(float r, float pi=3.14)
{
    cout << "Area of Circle :: " << pi*r*r;
}
int main()
{
    int r;
    cout<<"Enter Radius of Circle :: ";
    cin>>r;
    area(r);
} 