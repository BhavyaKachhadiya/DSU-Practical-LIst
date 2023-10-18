#include <iostream>
using namespace std;
class A 
{
public:
   int n=100;
   char ch='A';
   
   void disp(A a)
   {
      cout<<a.n<<endl;
      cout<<a.ch<<endl;
   }
};
int main() 
{
   A obj;
   obj.disp(obj);
   cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
   return 0;
}