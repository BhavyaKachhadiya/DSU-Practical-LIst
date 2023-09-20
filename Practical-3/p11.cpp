#include <iostream>
using namespace std;
class product{
	private:
		int product_id,unit_price;
		string product_name;
	public:
		void getData()
		{
			cout<<"Product ID :: ";
			cin>>product_id;
			cout<<"Product Name :: ";
			cin>>product_name;
			cout<<"Product Unit Price :: ";
			cin>>unit_price;
			cout<<endl;
		}
		void putData()
		{
			cout<<"ID :: "<<product_id<< endl;
			cout<<"Name :: "<<product_name<<endl;
			cout<<"Price :: "<<unit_price<<endl<<endl;
		}
};

int main()
{
	product p1,p2;
	p1.getData();
	p2.getData();
	
	p1.putData();
	p2.putData();
	cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}
