#include <iostream>
using namespace std;

int main() {
    int purchaseAmount;
    int hasCard; 

    cout << "Enter your total purchase amount: (In between 1000 to 10000)";
    cin >> purchaseAmount;

    cout << "Do you have a membership card? (1 for Yes, 0 for No): ";
    cin >> hasCard;

    cout << ((purchaseAmount > 5000 || hasCard == 1) ? "Discount Applied" : "No Discount") << endl;

    return 0;
}