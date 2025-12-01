#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your assignment marks: ";
    cin >> marks;

    marks += 5;

    cout << "Marks after 5 grace marks: " << marks << endl;

    return 0;
}