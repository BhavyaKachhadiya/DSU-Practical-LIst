#include <iostream>
using namespace std;
class Animal
{
    public:
       void eat()
       {
            cout<<"Eating Animal";
       } 
};

class dog: public Animal
{
    public:
    void eat()
    {
        cout<<"Eating Dog";
    }
};
int main()
{
    dog d=dog();
    d.eat();
cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}