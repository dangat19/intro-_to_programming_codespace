#include <iostream>
using namespace std;
 
int main() {
    double Vp, Vs;
    cout << "Enter primary voltage (Vp): ";
    cin  >> Vp;
    cout << "Enter secondary voltage (Vs): ";
    cin  >> Vs;
 
    if (Vp <= 0 || Vs <= 0) {
        cout << "Error: Both voltages must be strictly greater than zero." << endl;
    } else {
        if (Vs > Vp) {
            cout << "Transformer Type: Step-Up" << endl;
        } else if (Vs < Vp) {
            cout << "Transformer Type: Step-Down" << endl;
        } else {
            cout << "Transformer Type: Isolation" << endl;
        }
    }
 
    return 0;
}
