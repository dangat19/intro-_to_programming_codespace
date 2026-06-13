#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m;
    cout << "Enter an integer (1-12): ";
    cin >> m;

    int i = 1;
    while (i <= 10) {
        cout << m << " x " << setw(2) << i << " = " << (m * i) << endl;
        i = i + 1;
    }

    return 0;
}