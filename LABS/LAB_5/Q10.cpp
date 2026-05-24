#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float amount;
    int   isMember;
 
    cout << "Enter total purchase amount (KES): ";
    cin  >> amount;
    cout << "Loyalty member? (1=Yes, 0=No): ";
    cin  >> isMember;
 
    float finalAmount = amount;
 
    if (amount > 5000.0f) {
        finalAmount = amount * 0.90f;        // 10% discount
        if (isMember == 1) {
            finalAmount = finalAmount * 0.95f;  // extra 5% for members
        }
    } else {
        if (isMember == 1) {
            finalAmount = amount * 0.98f;    // flat 2% for members
        }
        // Non-members: no discount
    }
 
    cout << fixed << setprecision(2);
    cout << "Final Payable Balance: KES " << finalAmount << endl;
 
    return 0;
}
