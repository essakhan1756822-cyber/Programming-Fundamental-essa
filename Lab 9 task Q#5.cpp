#include <iostream>
using namespace std;

int main() {
    float temp, sum = 0, maxTemp;
    
    cout << "Enter temperature for Day 1: ";
    cin >> temp;
    sum = temp;
    maxTemp = temp;

    for (int i = 2; i <= 7; i++) {
        cout << "Enter temperature for Day " << i << ": ";
        cin >> temp;

        sum += temp;
        if (temp > maxTemp)
            maxTemp = temp;
    }

    cout << "Average temperature of the week = " << sum / 7 << endl;
    cout << "Highest temperature = " << maxTemp << endl;

    return 0;
}