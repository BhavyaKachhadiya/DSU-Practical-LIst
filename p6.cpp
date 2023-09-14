#include <iostream>
using namespace std;

class Shape{
	public:
		int height;
		int base;
		void get_shape();
	void display_shape();
};
void Shape::get_shape()
{
	cout<<"Enter height :: ";
	cin>>height;
	cout<<"Enter Base :: ";
	cin>>base;
}
void Shape::display_shape()
	{
		cout<<endl<<"Height :: "<<height<<endl;
		cout<<"Base :: "<<base;	
	}
int main()
{
	Shape s;
	s.get_shape();
	s.display_shape();
}
