#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int len,bre;
    public:
        Rectangle(int len,int bre)
        {
            cout << "Area of Rectangle :: "<<len*bre;
        }
        
};
int main()
{
Rectangle r(3,5);
cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}