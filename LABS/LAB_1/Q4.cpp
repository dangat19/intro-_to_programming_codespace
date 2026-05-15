#include <iostream>
using namespace std;

int main() {
    cout << "System Failure Imminent...\a\r"; 
    // \a triggers the system alert (bell) sound.
    // \r returns cursor to start of the line without moving to a new one.

    cout << "Just kidding, system is fine.";
}
