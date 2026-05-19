#include <iostream>
using namespace std;
 
int main() {
    int reading;
    cout << "Enter sensor reading: ";
    cin  >> reading;
 
    if ((reading >= 22 && reading <= 32) || (reading > 103)) {
        cout << "Status: Optimal" << endl;
    } else {
        cout << "Status: Critical" << endl;
    }
 
    return 0;
}
