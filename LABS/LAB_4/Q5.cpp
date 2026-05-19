#include <iostream>
using namespace std;

int main() {
    double weightKg;

    cout << "Enter your exact weight in kilograms (e.g., 68.5): ";
    cin >> weightKg;

    // Implicit cast: the double is assigned to an int directly.
    // The decimal portion is truncated (cut off) in memory — it is NOT rounded.
    int weightInt = weightKg;

    cout << "\nExact weight (double): " << weightKg << " kg" << endl;
    cout << "Weight as integer (int): " << weightInt << " kg" << endl;
    cout << "// Note: The decimal portion is lost (truncated) during implicit casting." << endl;

    return 0;
}