#include <iostream>
using namespace std;
class MyClass
{
    private:
        int a=5;
        friend class MyClass2;        
};
class MyClass2 
{
    public:
    void display(MyClass &C)
    {
        cout<<"Vaule of A is :: "<<C.a<<endl;
    }
};
int main()
{
    MyClass C;
    MyClass2 C2;
    C2.display(C);
cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}