#include <iostream>
using namespace std;
class A
{        
    public:
    A()
    {
        cout << "This is a Coming from Class A"<<endl;
    }
        
};
class B
{
    public:
    B()
    {
        cout << "This is a Coming from Class B"<<endl;
    }

};
class C: public A,public B{};
int main()
{
    C c;   
    cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
    cout << "Erollment number: 220130318020" << endl;
}