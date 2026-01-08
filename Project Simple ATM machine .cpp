#include <iostream>
using namespace std;

int main() {
    string accountNumber = "003161756822";
    string pin = "1122";
    double balance = 1000.0;

    string inputAcc, inputPin;
    int choice;
    double amount;
    cout << "=== ATM Machine ===\n";
    cout << "Enter Account Number: ";
    cin >> inputAcc;
    cout << "Enter PIN: ";
    cin >> inputPin;

    if (inputAcc != accountNumber || inputPin != pin) {
        cout << "Invalid Account Number or PIN!\n";
        return 0;
    }
    while (true) {
        cout << "\n1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Your balance: $" << balance << endl;
                break;

            case 2: 
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else if (amount <= 0) {
                    cout << "Invalid amount!\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
                }
                break;

            case 3: 
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount!\n";
                } else {
                    balance += amount;
                    cout << "Deposit successful. New balance: $" << balance << endl;
                }
                break;

            case 4: 
                cout << "Thank you for using the ATM. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
