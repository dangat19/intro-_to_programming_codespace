#include <iostream>
using namespace std;

int main() {
    string courseName; // Fixed: added semicolon

    cout << "Enter your full course name: "; // Fixed: added semicolon
    getline(cin, courseName); // Fixed: replaced cin >> with getline() to capture spaces

    cout << "You are enrolled in: " << courseName << endl; // Fixed: >> changed to <<, added semicolon

    return 0;
}