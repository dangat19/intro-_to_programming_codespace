#include <iostream>
using namespace std;

int main() {
    string studentName;
    float amountPaid;

    cout << "Enter Student Full Name: ";
    getline(cin, studentName);

    cout << "Enter Amount Paid (KSh): ";
    cin >> amountPaid;

    // 1 loyalty point per 100 shillings; static_cast<int> ensures whole number (no decimals)
    int loyaltyPoints = static_cast<int>(amountPaid / 100);

    cout << "\n========================================" << endl;
    cout << "       UNIVERSITY FEE PAYMENT RECEIPT   " << endl;
    cout << "========================================" << endl;
    cout << "Student Name  : " << studentName << endl;
    cout << "Amount Paid   : KSh " << amountPaid << endl;
    cout << "Loyalty Points: " << loyaltyPoints << " points" << endl;
    cout << "========================================" << endl;

    return 0;
}