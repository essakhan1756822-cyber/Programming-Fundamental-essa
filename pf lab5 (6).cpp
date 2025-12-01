#include <iostream>
using namespace std;

int main() {
    int temp, windowClosed;
    cout << "Enter current temperature (°C): (From 10 to 50) ";
    cin >> temp;
    cout << "Is the window closed? (1 for Yes, 0 for No): ";
    cin >> windowClosed;
    cout << ((temp > 30 && windowClosed == 1) ? "AC ON" : "AC OFF") << endl;

    return 0;
}