#include <iostream>
using namespace std;

int main() {
    int n, value;
    int evenSum = 0, oddSum = 0;

    cout << "How many numbers? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> value;

        if (value % 2 == 0)
            evenSum += value;
        else
            oddSum += value;
    }

    cout << "Sum of Even numbers = " << evenSum << endl;
    cout << "Sum of Odd numbers = " << oddSum << endl;

    return 0;
}