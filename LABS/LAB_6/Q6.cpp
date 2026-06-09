#include <iostream>
using namespace std;

int main() {
    char item;
    int quantity;

    const int BURGER_PRICE = 500;
    const int PIZZA_PRICE = 800;
    const int FRIES_PRICE = 150;
    const int DRINK_PRICE = 100;

    cout << "===== FAST FOOD TERMINAL =====" << endl;
    cout << "B - Burger (500 Ksh)" << endl;
    cout << "P - Pizza  (800 Ksh)" << endl;
    cout << "F - Fries  (150 Ksh)" << endl;
    cout << "D - Drinks (100 Ksh)" << endl;

    cout << "\nSelect item: ";
    cin >> item;

    switch (item) {
        case 'B':
        case 'b':
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Subtotal = Ksh " << quantity * BURGER_PRICE << endl;
            break;

        case 'P':
        case 'p':
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Subtotal = Ksh " << quantity * PIZZA_PRICE << endl;
            break;

        case 'F':
        case 'f':
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Subtotal = Ksh " << quantity * FRIES_PRICE << endl;
            break;

        case 'D':
        case 'd':
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Subtotal = Ksh " << quantity * DRINK_PRICE << endl;
            break;

        default:
            cout << "Invalid menu selection!" << endl;
    }

    return 0;
}