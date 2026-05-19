#include <iostream>
using namespace std;
 
int main() {
    int year;
    cout << "Enter a year: ";
    cin  >> year;
 
    if (year <= 0) {
        cout << "Error: Year must be a positive integer." << endl;
    } else {
        bool isLeap = false;
 
        if (year % 400 == 0) {
            isLeap = true;
        } else if (year % 100 == 0) {
            isLeap = false;          // century year not div by 400
        } else if (year % 4 == 0) {
            isLeap = true;
        }
 
        if (isLeap) {
            cout << year << " is a Leap Year." << endl;
        } else {
            cout << year << " is NOT a Leap Year." << endl;
        }
    }
 
    return 0;
}
