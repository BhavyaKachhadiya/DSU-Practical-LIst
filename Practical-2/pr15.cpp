#include <iostream>
using namespace std;
inline int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    int ans;
    cout<<"Enter a number :: ";
    cin>>n;
    ans =  square(n);   
    cout<<"square of "<<n<<" is "<< ans; 
    cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}