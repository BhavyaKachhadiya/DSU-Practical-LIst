#include <iostream>
using namespace std;
void sum(int &a ,int &b);
int main()
{
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    sum(a,b);
    cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}
void sum(int &a,int &b){
    cout << "Sum of " <<a<<" and "<<b<<" is :: "<< a+b <<endl;
}