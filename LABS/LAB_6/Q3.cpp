#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score entered." << endl;
        return 0;
    }

    switch (score / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            cout << "Excellent" << endl;
            break;

        case 6:
            cout << "Good" << endl;
            break;

        default:
            cout << "Fail" << endl;
    }

    return 0;
}