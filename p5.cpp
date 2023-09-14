#include <iostream>
using namespace std;

class Distance
{
	private:
	int feet, inches;
	public:
		void get_distance()
		{
			cout<<"Enter Feet :: ";
			cin>>feet;
			cout<<"Enter Inches :: ";
			cin>>inches;
		}
		void display_distance()
		{
			cout<<endl<<"Feet :: "<<feet<<endl;
			cout<<"Inches :: "<<inches;			
		}
};

int main()
{
	Distance d;
	d.get_distance();
	d.display_distance();
}

