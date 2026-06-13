#include <iostream>
using namespace std;

int main() {
    /*
      Error found:
      1. "i == i + 1;" uses the comparison operator == instead of
         the assignment operator =. So i never actually changes,
         and (i <= 5) stays true forever -> infinite loop.

      Fix: change "i == i + 1;" to "i = i + 1;"
    */

    int i = 1;
    while (i <= 5) {
        cout << i << endl;
        i = i + 1;
    }

    return 0;
}