#include <iostream>
using namespace std;

int main() {
    string productName;
    float price;
    int discountRate;

    cout << "Enter product name: ";
    getline(cin, productName);

    cout << "Enter product price: ";
    cin >> price;

    cout << "Enter discount rate as a whole number (e.g., 15 for 15%): ";
    cin >> discountRate;

    // static_cast<float>(discountRate) ensures decimal division (e.g., 15 -> 0.15)
    // Without it, 15/100 would perform integer division and give 0
    float discountDecimal = static_cast<float>(discountRate) / 100;
    float discountAmount = price * discountDecimal;
    float finalPrice = price - discountAmount;

    cout << "\nProduct: " << productName << endl;
    cout << "Original Price: KSh " << price << endl;
    cout << "Discount (" << discountRate << "%): KSh " << discountAmount << endl;
    cout << "Final Discounted Price: KSh " << finalPrice << endl;

    return 0;
}