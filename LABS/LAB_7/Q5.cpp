#include <iostream>
using namespace std;

int main() {
    /*
      Errors found in the original code:
      1. "num = 2" is missing a semicolon.
      2. "while num <= 50 {" is missing parentheses around the
         condition. It should be: while (num <= 50) {
      3. "sum" is never initialized, so it starts with a garbage
         value instead of 0.
      4. "cout << "Sum of even numbers : " + sum;" tries to add a
         string and an int with +. It should use << instead.
    */

    int num, sum;
    num = 2;
    sum = 0;

    while (num <= 50) {
        sum = sum + num;
        num = num + 2;
    }

    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}