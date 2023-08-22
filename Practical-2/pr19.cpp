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
}
void sum(int &a,int &b){
    cout << "Sum of " <<a<<" and "<<b<<" is :: "<< a+b <<endl;
}