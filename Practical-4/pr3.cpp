#include <iostream>
using namespace std;
class Student
{
    public:
        string name;
        float spi;
        void getdata()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter SPI: ";
            cin>>spi;
        }

};
int main()
{
    Student s[10];
    for (int i = 0; i < 10; i++)
    {
        s[i].getdata();
    }
    int max;
    for (int i = 0; i < 10 ; i++)
    {
        if (s[0].spi>s[i].spi)
        {
            s[0].spi=max;
        }
        
    }

    cout<<"MAX :: "<<max;
    cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}