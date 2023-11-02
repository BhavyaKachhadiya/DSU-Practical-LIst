#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream FirstFile("dsu.txt");
    ofstream SecondFile("dsu1.txt");

    if (!FirstFile.is_open() || !SecondFile.is_open()) {
        cerr << "Failed to open the files." << endl;
        return 1;
    }

    string line;

    while (getline(FirstFile, line)) {
        SecondFile << line << '\n';  
    }

    FirstFile.close();
    SecondFile.close();

    cout << "File copied successfully." << endl;
    cout <<endl<<"This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;

    return 0;
}
