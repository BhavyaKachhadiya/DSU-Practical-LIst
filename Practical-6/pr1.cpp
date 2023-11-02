#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream dsu;
    dsu.open("dsu.txt");
    dsu << "Welcome to Dr. Subhash University!!"<<endl;
    dsu<<"This is a dsu.txt";
    cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
    dsu.close();
}