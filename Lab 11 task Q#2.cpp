#include <iostream>
using namespace std;

int main() {
    int n;

    
    do {
        cout << "Enter how many numbers (1 to 100): ";
        cin >> n;

        if (n < 1 || n > 100) {
            cout << "Error! Please enter a number between 1 and 100.\n";
        }
    } while (n < 1 || n > 100);

    int arr[100];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    float average = sum / n;
    cout << "Average = " << average << endl;

    return 0;
}