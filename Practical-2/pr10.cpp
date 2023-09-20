#include <iostream>
using namespace std;
void multiplication(int &a ,int &b);
int main()
{
    int a,b;
    cout<<"a :: ";
    cin>>a;
    cout<<"b :: ";
    cin>>b;
    multiplication(a,b);
    cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}
void multiplication(int &a,int &b){
    cout << "multiplication of " <<a<<" and "<<b<<" is :: "<< a*b <<endl;
}