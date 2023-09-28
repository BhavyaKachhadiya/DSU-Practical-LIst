#include <iostream>
using namespace std;
class Add
{
    private:
        int num1,num2;
        friend void getdata(Add &a);
    public:
        void putdata()
        {
            cout<<"Ans = "<<num1+num2;
        }
        
};
void getdata(Add &a)
{
	cout<<"Enter a = ";
	cin>>a.num1;
	cout<<"Enter b = ";
	cin>>a.num2;
	
}
int main()
{
    Add a;
    getdata(a);
    a.putdata();
cout <<endl<< "This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}
