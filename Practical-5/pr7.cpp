#include <iostream>
using namespace std;
class Animal
{
    public:
        virtual void eat() 
        {
            cout<<"eat";
        }
        
};
class dog : public Animal
{
    public:
    void eat()
    {
        cout<<"eat Dog";
    }

};
int main()
{
    Animal a;
    dog *d = new dog();
    
    d->eat();
cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}