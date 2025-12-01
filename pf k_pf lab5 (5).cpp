#include <iostream>
using namespace std;

int main() {
    float fuelLevel;
    cout << "Enter current fuel level (in liters): ";
    cin >> fuelLevel;
    fuelLevel -= 2;

    cout << "Fuel level after trip: (Toal-2)" << fuelLevel << " liters" << endl;

    return 0;
}
