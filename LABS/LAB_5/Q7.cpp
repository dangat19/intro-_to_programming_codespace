#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string fullName, tier;
    int age;
 
    cout << "Enter full name: ";
    getline(cin, fullName);
 
    cout << "Enter membership tier (VIP / Premium / Regular): ";
    cin  >> tier;
    cout << "Enter age: ";
    cin  >> age;
 
    if (tier == "VIP" || tier == "Premium") {
        if (age >= 18) {
            cout << fullName << " - Access Granted." << endl;
        } else {
            cout << fullName << " - Access Denied. Must be 18 or older." << endl;
        }
    } else if (tier == "Regular") {
        cout << fullName << " - Placed on the general waiting list." << endl;
    } else {
        cout << "Error: Unknown membership tier." << endl;
    }
 
    return 0;
}

