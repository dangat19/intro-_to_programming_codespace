#include <iostream>
using namespace std;
 
int main() {
    float a, b, c;
    cout << "Enter three side lengths: ";
    cin  >> a >> b >> c;
 
    // Validate triangle inequality
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            cout << "Triangle Type: Equilateral" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Triangle Type: Isosceles" << endl;
        } else {
            cout << "Triangle Type: Scalene" << endl;
        }
    } else {
        cout << "Error: The given sides cannot form a valid triangle." << endl;
    }
 
    return 0;
}
