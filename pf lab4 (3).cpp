#include <iostream>
using namespace std;

int main() {
    int required = 500, current = 420;
    int shortage = required - current;

    cout << "1. Is stock sufficient? :current >= required= " << (current >= required) << endl;
    cout << "2. Is stock less than 50%? :current < (required / 2)= " << (current < (required / 2)) << endl;
    cout << "3. Is stock equal to required? :current == required= " << (current == required) << endl;
    cout << "4. Is shortage > 50? :shortage > 50= " << (shortage > 50) << endl;
    
    return 0;
}