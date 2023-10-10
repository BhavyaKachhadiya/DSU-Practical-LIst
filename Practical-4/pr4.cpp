#include <iostream>
using namespace std;
class Time
{
private:
int hour,min,sec;
public:
void getdata()
{
  cout<<"Sec :: ";
  cin>>sec;
  cout<<"Min :: ";
  cin>>min;
  cout<<"Hour :: ";
  cin>>hour;
}
void putdata()
{
cout<<"Sec :: "<<sec<<endl;
  cout<<"min :: "<<min<<endl;
  cout<<"hour :: "<<hour<<endl;
}

void add(Time t1, Time t2)
{
cout<<"Sec :: "<<t1.sec+t2.sec;
  cout<<"min :: "<<t1.min+t2.min;
  cout<<"hour :: "<<t1.hour + t2.hour;
}
};
int main() {
  Time t1,t3,t2;
  
  t1.getdata();
  t1.putdata();

    t2.getdata();
  t2.putdata();

  t3.add(t1,t2);
}