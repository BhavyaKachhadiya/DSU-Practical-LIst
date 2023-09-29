#include <iostream>
using namespace std;
class A
{        
    public:
        void putdata()
        {
            cout << "This is a Coming from Class A"<<endl;
        }
};
class B : public A
{

};
int main()
{
    B b;
    b.putdata();
cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}