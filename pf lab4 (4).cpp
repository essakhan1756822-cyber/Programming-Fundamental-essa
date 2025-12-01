#include <iostream>
using namespace std;

int main() {
    int total = 60, attended = 48;
    float requiredPercent = 75;
    float attendancePercent = (attended * 100.0) / total;
    cout << "total = 60, attended = 48"<<endl;
    cout<<"requiredPercent = 75"<<endl;
    cout << "1. Requirement met? :attendancePercent >= requiredPercent= " << (attendancePercent >= requiredPercent) << endl;
    cout << "2. Attended more than 50? :attended > 50=" << (attended > 50) << endl;
    cout << "3. Less than 60%? :attendancePercent < 60=" << (attendancePercent < 60) << endl;

    return 0;
}