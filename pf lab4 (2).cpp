#include <iostream>
using namespace std;

int main() {
    float ticket = 1200;
    float discount = ticket * 0.25;
    float discounted = ticket - discount;
    float serviceCharges = discounted * 0.08;
    float finalAmount = discounted + serviceCharges + 50;
    cout<<"ticket price:1200"<<endl;
    cout<<"diccont: 25% added"<<endl;
    cout<<"sercicharge:8% added"<<endl;
    cout<<"Online booking Fee:50 PKR"<<endl;
    cout << "Final Ticket Cost: " << finalAmount << " PKR" << endl;

    return 0;
}