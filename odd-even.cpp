#include <iostream>
using namespace std;

int check() {
    int a = 11;

    if (a%2 == 0) {
        return 1;
    }
    else return 0;
}

int main () {
    cout << check() << endl;
    return 0;
}