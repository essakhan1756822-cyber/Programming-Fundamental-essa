#include <iostream>
using namespace std;

int main() {
    int burgerPrice = 350, drinkPrice = 120, friesPrice = 150;
    int totalBill = (2 * burgerPrice) + drinkPrice + friesPrice;

    float salesTax = totalBill * 0.07;
    float finalAmount = totalBill + salesTax;
    float average = finalAmount / 4.0;

    cout << "Total bill: " << totalBill << " PKR" << endl;
    cout << "Sales Tax (7%): " << salesTax << " PKR" << endl;
    cout << "Final Amount (with tax): " << finalAmount << " PKR" << endl;
    cout << "Average cost per item: " << average << " PKR" << endl;

    return 0;
}