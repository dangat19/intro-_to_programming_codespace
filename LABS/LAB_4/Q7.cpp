#include <iostream>
using namespace std;

int main() {
    int totalItems, activeMachines;

    cout << "Enter Total Items Produced: ";
    cin >> totalItems;

    cout << "Enter Number of Active Machines: ";
    cin >> activeMachines;

    if (activeMachines == 0) {
        // Prevent Run-time Error: division by zero
        cout << "\nWARNING: Cannot divide by zero. Please enter at least 1 active machine." << endl;
    } else {
        int itemsPerMachine = totalItems / activeMachines;
        cout << "\nItems produced per machine: " << itemsPerMachine << endl;
    }

    return 0;
}