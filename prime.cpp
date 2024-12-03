#include <iostream> 
using namespace std;

int checkPrime(int num) {
    // what needs to be done --> to check if a number is prime or not
    // what is a prime number --> one that is divisible only by itself and 1.

    if (num <= 1) {
        return 0;   //not prime
    }

    for (int i=0; i<num; i++) { //looping for all the numbers smaller than num
        if (num%i == 0) {       //checking if num is divisible by any number smaller than itself 
            return 0; //not prime
        }
        else return 1; //prime
    }
}
int main() {
    int num;
    cout << "Enter the number to check" << endl;
    cin >> num;
    cout << checkPrime(num) << endl;
    return 0;
}