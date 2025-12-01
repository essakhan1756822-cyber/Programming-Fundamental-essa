#include <iostream>
using namespace std;

int main() {
    int attendance;
    bool feePaid;

    cout << "Enter your attendance percentage: ";
    cin >> attendance;

    cout << "Have you paid the fee? (1 for Yes, 0 for No): ";
    cin >> feePaid;

    cout << ((attendance >= 75 && feePaid) ? "Eligible" : "Not Eligible") << endl;

    return 0;
}