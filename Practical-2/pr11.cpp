#include <iostream>
using namespace std;
int Sum;
int &sum(int a,int b);
int main()
{
    int a,b,answer;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    answer= sum(a,b);
    cout << "Sum of " <<a<<" and "<<b<<" is :: "<< Sum <<endl;
}
int &sum(int a,int b){
    Sum=a+b;
    return Sum;
}