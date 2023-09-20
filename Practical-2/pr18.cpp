#include <iostream>
using namespace std;
#define PI 3.14
class area{
private:
    float r;

public:
    void Area (double r)
    {
        cout <<PI*r*r<<endl;
    }
};
int main()
{
    area a;
    a.Area(4.0);
    cout << "This code was created by Bhavya Kachhadiya." << endl;
  cout << "Erollment number: 220130318020" << endl;
}