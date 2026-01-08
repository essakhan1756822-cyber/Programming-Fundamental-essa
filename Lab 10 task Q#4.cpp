 #include <iostream>
using namespace std;

int main() {
    int num;
    long long fact = 1;
    int i = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (i <= num) {
        fact *= i;
        i++;
    }

    cout << "Factorial of " << num << " = " << fact << endl;

    return 0;
}