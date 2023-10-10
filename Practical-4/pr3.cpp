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
    string Maxname= s[0].name;
    float max = s[0].spi;
    for (int i = 1; i < 10; i++)
    {
        if (s[i].spi > max)
        {
            max = s[i].spi;
            Maxname=s[i].name;
        }
    }

    cout<<"Name :: "<<Maxname<<endl;
    cout<<"MAX :: "<<max;
    cout <<endl<< "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}
