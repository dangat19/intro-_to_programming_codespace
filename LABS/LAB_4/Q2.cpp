#include <iostream>
using namespace std;

int main() {
    float totalBill;
    int numPeople;

    cout << "Enter the total restaurant bill (e.g., 2550.75): ";
    cin >> totalBill;

    cout << "Enter the number of people splitting the bill: ";
    cin >> numPeople;

    float exactShare = totalBill / numPeople;
    int truncatedShare = static_cast<int>(exactShare); // Drop the cents

    cout << "\nExact share per person: KSh " << exactShare << endl;
    cout << "Truncated share per person (no cents): KSh " << truncatedShare << endl;

    return 0;
}