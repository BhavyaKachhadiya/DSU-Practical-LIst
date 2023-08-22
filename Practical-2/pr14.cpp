#include <iostream>
using namespace std;
inline int cube(int n)
{
    return n*n*n;
}
int main()
{
    int n;
    int ans;
    cout<<"Enter a number :: ";
    cin>>n;
    ans =  cube(n);   
    cout<<"Cube of "<<n<<" is "<< ans; 
}