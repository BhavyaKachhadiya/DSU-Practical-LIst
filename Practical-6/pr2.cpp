#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string line;
    ifstream inputFile("dsu.txt");
    if (!inputFile.is_open()) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();
    cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
    return 0;
}
