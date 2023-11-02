#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream readFile("dsu.txt");

    if (!readFile.is_open()) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    int counter = 0;
    char c;

    while (readFile.get(c)) {
        counter++;
    }

    readFile.close();

    cout << "Number of characters in the file: " << counter << endl;
    cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;

    return 0;
}
