#include <iostream>
using namespace std;

int check_Leap (int year) {
    cout << "Enter year: "<< endl;
    cin >> year;

    //  2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.
    if ((year%4 == 0) || (year%100 != 0 && year%400 == 0)) {
        return 1;
    } else return 0;

}


int main() {
    int year;
    cout << check_Leap(year);
    return 0;
}