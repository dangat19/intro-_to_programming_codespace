#include <iostream>
using namespace std;

int main() {
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    switch (letter) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout << "The letter is a vowel." << endl;
            break;

        default:
            cout << "The letter is a consonant." << endl;
    }

    return 0;
}