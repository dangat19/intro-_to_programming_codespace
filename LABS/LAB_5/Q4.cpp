#include <iostream>
using namespace std;
 
int main() {
    char gender;
    int  age;
 
    cout << "Enter gender (M/F): ";
    cin  >> gender;
    cout << "Enter age: ";
    cin  >> age;
 
    if (gender == 'M' || gender == 'm') {
        if (age < 18) {
            cout << "Activity: Junior Football" << endl;
        } else {
            cout << "Activity: Senior Rugby" << endl;
        }
    } else if (gender == 'F' || gender == 'f') {
        if (age < 18) {
            cout << "Activity: Junior Gymnastics" << endl;
        } else {
            cout << "Activity: Senior Hockey" << endl;
        }
    } else {
        cout << "Error: Invalid gender character. Please enter 'M' or 'F'." << endl;
    }
 
    return 0;
}
