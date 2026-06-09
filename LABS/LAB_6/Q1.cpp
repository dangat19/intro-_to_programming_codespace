#include <iostream>
using namespace std;
int main(){
    int choice;
    const float PI = 3.14159;

    cout << "===== Geometry Computation Tool =====" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            float radius, area;
            cout << "Enter radius: ";
            cin >> radius;
            area = PI * radius * radius;
            cout << "Area of Circle = " << area << endl;
            break;
        }

        case 2: {
            float length, width, area;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area << endl;
            break;
        }

        case 3: {
            float base, height, area;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle = " << area << endl;
            break;
        }

        default:
            cout << "Invalid selection!" << endl;
    }

    return 0;
}
