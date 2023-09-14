#include <iostream>

using namespace std;

class student{
	private:
		string name;
		int age;
		
	public:
		void get_details()
		{
			cout<<"Enter Name :: ";
			cin>>name;
			cout<<"Enter Age :: ";
			cin>>age;
		}
		void display_details()
		{
			cout<<endl<<"Name :: "<<name<<endl;
			cout<<"Age :: "<<age;
			
		}
};

int main()
{
	student s;
	s.get_details();
	s.display_details();
}
