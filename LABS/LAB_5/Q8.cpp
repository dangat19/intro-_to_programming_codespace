#include <iostream>
using namespace std;
 
int main() {
    int isVisibilityPoor, isRunwayCluttered;
 
    cout << "Is visibility poor?    (1=Yes, 0=No): ";
    cin  >> isVisibilityPoor;
    cout << "Is runway cluttered?   (1=Yes, 0=No): ";
    cin  >> isRunwayCluttered;
 
    if (!isVisibilityPoor && !isRunwayCluttered) {
        cout << "Status: Cleared to Land" << endl;
    } else {
        cout << "Status: Hold Position" << endl;
    }
 
    return 0;
}
