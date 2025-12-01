#include <iostream>
using namespace std;

int main() {
    float recharge;
    cout << "Enter recharge amount: ";
    cin >> recharge;

    recharge += recharge * 0.10;

    cout << "Balance after 10% bonus: " << recharge << endl;

    return 0;
}