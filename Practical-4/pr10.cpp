#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int len,bre;
    public:
        Rectangle()
        {
            cout << "Enter Length :: ";
            cin >>len;
            cout << "Enter Breath :: ";
            cin >>bre;
            cout << "Area of Rectangle :: "<<len*bre;
        }
        
};
int main()
{
Rectangle r;
cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}