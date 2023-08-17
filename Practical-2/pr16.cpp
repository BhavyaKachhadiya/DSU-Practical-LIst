#include <iostream>
using namespace std;
class area{
private:
    float r;
    int l,b;
    int s;
public:
    void Area (double r)
    {
        cout << 3.14*r*r<<endl;
    }
    void Area (int s)
    {
        cout << 4*s<<endl;
    }
    void Area (int l,int b)
    {
        cout << l*b<<endl;
    }
};
int main()
{
    area a;
    a.Area(2,4);
    a.Area(4);
    a.Area(4.0);
}