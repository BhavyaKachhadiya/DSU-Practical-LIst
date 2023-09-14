#include <iostream>
using namespace std;

class Max{
	private:
		int num_1,num_2;
	public:
		int largest()
		{
			if(num_1>num_2)
			{
				return num_1;
			}
			else
			{
				return num_2;
			}
		}
		void input()
		{
			cout<<"Enter 1 Number ::";
			cin>>num_1;
			cout<<"Enter 2 Number ::";
			cin>>num_2;
		}
		void display()
		{
			int max=largest();
			cout<<"Max :: "<<max;
		}
};
int main()
{
	Max m;
	m.input();
	m.display();
}
