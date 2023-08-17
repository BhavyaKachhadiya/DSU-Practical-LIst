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
}