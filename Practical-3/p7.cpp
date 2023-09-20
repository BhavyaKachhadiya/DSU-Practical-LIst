#include <iostream>
using namespace std;

class employee{
	private:
		int emp_no;
		string name;
	public:
		void get_emp()
		{
			cout<<"Enter Number :: ";
			cin>>emp_no;
			cout<<"Enter Name :: ";
			cin>>name;
		}
		void display_emp()
		{
			cout<<endl<<"Number :: "<<emp_no<<endl;
			cout<<"Name :: "<<name;
		}
};

int main()
{
	employee e;
	e.get_emp();	
	e.display_emp();
	cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}
