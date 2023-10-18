#include <iostream>
using namespace std;
class Product 
{
public:
    int MFY;
    int EXPY;

    Product(int mYear, int eYear)
	 {
        MFY = mYear;
        EXPY = eYear;
    }

    int calDifference() {
        return EXPY - MFY;
    }
};

int main() 
{
	int MFY, EXPY;
    cout << "Enter manufacture year: ";
    cin >> MFY;
    cout << "Enter expiry year: ";
    cin >> EXPY;

    Product p(MFY, EXPY);

    
    int dif = p.calDifference();
    
	if(MFY>EXPY)
    {
    	cout<<"Invalid Entered Year Check This Again :)";
	}
	else
	{
	cout << "The difference between manufacture year and expiry year is: " << dif << " years" <<endl;
	}
	cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
    cout << "Erollment number: 220130318020" << endl;
    return 0;
}

