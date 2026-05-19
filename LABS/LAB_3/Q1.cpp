#include <iostream>
#include <string>
using namespace std;

int main() {
    int studentID;
    string fullName;

    cout << "Enter your Student ID: ";
    cin >> studentID;

    cin.ignore(); // Clears leftover newline so getline() works correctly

    cout << "Enter your Full Name: ";
    getline(cin, fullName);

    cout << "Welcome " << fullName << " (ID: " << studentID << ")!" << endl;
    return 0;
}
