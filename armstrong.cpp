#include<iostream>
#include <cmath>
using namespace std;

void check_armstrong(int num) {
    int temp, rem, sum=0; 
    temp = num;
    while (num>0) {
        rem = num % 10;
        sum += (rem*rem*rem);
        num = num/10;
    }
    if (sum == temp) {
        cout << "given number is armstrong" << endl;
    } else {
        cout << "not armstrong" << endl;
    }
}

int main()
{   
    int num; //number to check for armstrong
    cout << "enter number to check if its armstrong number or not: ";
    cin >> num;
    check_armstrong(num);
    return 0;
}