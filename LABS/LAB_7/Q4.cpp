#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int steps = 0;
    cout << n;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        cout << " " << n;
        steps = steps + 1;
    }

    cout << endl;
    cout << "Total steps: " << steps << endl;

    return 0;
}