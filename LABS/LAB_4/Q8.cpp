#include <iostream>
using namespace std;

int main() {
    char letter;
    int shift;

    cout << "Enter a single letter to encrypt: ";
    cin >> letter;

    cout << "Enter the encryption shift number: ";
    cin >> shift;

    // Implicit cast: adding int to char gives an int (ASCII arithmetic)
    int encryptedAscii = letter + shift;

    // Explicit cast back to char to get the encrypted letter
    char encryptedLetter = static_cast<char>(encryptedAscii);

    cout << "\nOriginal letter: " << letter << endl;
    cout << "Encrypted letter: " << encryptedLetter << endl;

    return 0;
}