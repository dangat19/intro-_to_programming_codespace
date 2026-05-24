#include <iostream>
using namespace std;
 
int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin  >> a >> b >> c;
 
    int maximum;
 
    if (a >= b) {
        if (a >= c) {
            maximum = a;
        } else {
            maximum = c;
        }
    } else {
        if (b >= c) {
            maximum = b;
        } else {
            maximum = c;
        }
    }
 
    cout << "Maximum value: " << maximum << endl;
 
    return 0;
}
