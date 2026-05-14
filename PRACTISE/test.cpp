#include <iostream>
using namespace std;
int main(){
    int totalDistance =355;//in km
    int fuelConsumed =40;//in litres
    float fuelefficiency=totalDistance/fuelConsumed;//in km/litre
    cout<<"The truck's \"Efficency\" is:"<<fuelefficiency<<"km/litre"<<endl;
    return 0;
}
