#include <iostream>

using namespace std;

struct student{
	string name;
	int std;
	float percentage;
};

int main()
{
	student s1;
	
	cout<<"Enter Name :: ";
	getline(cin,s1.name);
	
	cout<<"Enter Std :: ";
	cin>>s1.std;
	
	cout<<"Enter Percentage :: ";
	cin>>s1.percentage;
	
	cout<<endl<<"Name :: "<<s1.name<<endl;
		cout<<"Standard :: "<<s1.std<<endl;
		cout<<"Percentage :: "<<s1.percentage<<"%"<<endl;
}
