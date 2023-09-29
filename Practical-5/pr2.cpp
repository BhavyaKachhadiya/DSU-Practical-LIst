#include <iostream>
using namespace std;
class A
{        
    public:
    void putDataFromA()
        {
            cout << "This is a Coming from Class A"<<endl;
        }
        
};
class B: public A
{
    public:
    void putDataFromB()
        {
            cout << "This is a Coming from Class B"<<endl;
        }

};
class C: public B{};
int main()
{
    C c;
    c.putDataFromA();
    c.putDataFromB();
cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}