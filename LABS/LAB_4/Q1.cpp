#include <iostream>
using namespace std;

int main() {
    int studentID;
    string fullName;

    cout << "Enter your Student ID: ";
    cin >> studentID;

    cin.ignore(); // Clear the input buffer so getline() is not skipped

    cout << "Enter your Full Name: ";
    getline(cin, fullName);

    cout << "\nWelcome, " << fullName << "! Your Student ID is: " << studentID << endl;

    return 0;
}