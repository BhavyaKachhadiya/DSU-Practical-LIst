#include <iostream>
using namespace std;

class Max{
	private:
		int a,b,c;
	public:
		void get()
		{
			cout<<"Enter 1 number :: ";
			cin>>a;
			cout<<"Enter 2 number :: ";
			cin>>b;
			cout<<"Enter 3 number :: ";
			cin>>c;
		
		}
		void put()
		{
			if(a>b)
			{
				cout<<"Max :: "<<a;
			}
			else if(b<c)
			{
				cout<<"Max :: "<<c;
			}
			else
			{
				cout<<"Max :: "<<b;
			}
			
			
				
		}
};

int main()
{
	Max m;
	m.get();
	m.put();
	cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}
