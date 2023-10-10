#include <iostream>
using namespace std;
class Count
{
    private:
        static int count;
    public:
        static int increment()
        {
            count++;
        }

};
int Count::count=0;
int main()
{   Count a;
    Count::increment();
    Count::increment();
    Count::increment();

    cout<<"Count :: "<<a.increment();
cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}