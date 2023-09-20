#include <iostream>
using namespace std;

class account{
	public:
		int acc_no,branch_code;
		float balance;		
};

int main()
{
	account a;
	cout<<"Enter Account No :: ";
	cin>>a.acc_no;
	cout<<"Enter Balance :: ";
	cin>>a.balance;
	cout<<"Branch Code ::";
	cin>>a.branch_code;
	
	cout<<"Account No :: "<<a.acc_no<<endl;
	cout<<"Balance :: "<<a.balance<<endl;
	cout<<"Branch Code :: "<<a.branch_code<<endl;
	cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}
