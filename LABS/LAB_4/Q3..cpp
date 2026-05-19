#include <iostream>
using namespace std;

int main() {
    char letter;
    int asciiCode;

    cout << "Enter a single character: ";
    cin >> letter;

    cout << "The ASCII value of '" << letter << "' is: " << static_cast<int>(letter) << endl;

    cout << "\nEnter an integer between 65 and 90: ";
    cin >> asciiCode;

    cout << "The uppercase letter for " << asciiCode << " is: " << static_cast<char>(asciiCode) << endl;

    return 0;
}