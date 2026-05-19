#include <iostream>
using namespace std;
 
int main() {
    int mark;
    cout << "Enter student mark (0-100): ";
    cin  >> mark;
 
    if (mark < 0 || mark > 100) {
        cout << "Error: Invalid mark. Please enter a value between 0 and 100." << endl;
    } else if (mark >= 70) {
        cout << "Grade: A" << endl;
    } else if (mark >= 60) {
        cout << "Grade: B" << endl;
    } else if (mark >= 50) {
        cout << "Grade: C" << endl;
    } else if (mark >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
 
    return 0;
}

