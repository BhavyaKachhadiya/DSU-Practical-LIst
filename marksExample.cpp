#include <iostream>
#include <iomanip>
using namespace std;
class Student
{
    public:
        string name;
};
class Marks : public Student
{
    public:
        int marks[5];
        float sum = 0;
        float avg;
    Marks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Marks of Subject " << (i + 1) << " :: ";
            cin >> marks[i];
            sum += marks[i];
        }
        cout << "Total Marks :: " << sum << endl;
        avg = (sum / 150) * 100;
        cout << "Percentage :: " << setprecision(4) << avg << "%";
    }
};
int main()
{
    Marks m;
    cout << endl
         << "This code was created by Bhavya Kachhadiya." << endl;
    cout << "Erollment number: 220130318020" << endl;
}