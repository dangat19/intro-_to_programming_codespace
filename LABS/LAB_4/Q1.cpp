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
<<<<<<< HEAD
}       
=======
}
>>>>>>> f2277ae1e40545fbcdb27234eca65082f1cc2ee1
