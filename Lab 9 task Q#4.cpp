#include <iostream>
using namespace std;

int main() {
    double popA, popB, rateA, rateB;
    int years = 0;

    cout << "Enter population of Town A: ";
    cin >> popA;
    cout << "Enter growth rate of Town A (%): ";
    cin >> rateA;

    cout << "Enter population of Town B: ";
    cin >> popB;
    cout << "Enter growth rate of Town B (%): ";
    cin >> rateB;

    while (popA < popB) {
        popA += popA * (rateA / 100);
        popB += popB * (rateB / 100);
        years++;
    }

    cout << "After " << years << " years:" << endl;
    cout << "Population of Town A = " << popA << endl;
    cout << "Population of Town B = " << popB << endl;

    return 0;
}