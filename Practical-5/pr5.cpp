#include <iostream>
using namespace std;
class This
{
    private:
        string name;
        int age;
    public:
    This(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    This(int age,string name){

        cout<<"Name :: "<<name<<endl<<"Age :: "<<age<<endl;
    }

        
};
int main()
{
    This pointer(17,"Bhavya");
cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}