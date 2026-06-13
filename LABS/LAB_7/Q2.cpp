#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive starting integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: please enter a positive integer." << endl;
    } else {
        while (n >= 1) {
            cout << n << " ";
            n = n - 1;
        }
        cout << endl << "Blast off!" << endl;
    }

    return 0;
}