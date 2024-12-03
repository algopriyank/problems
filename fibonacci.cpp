#include <iostream>
using namespace std;

void fib(int num) {
    int a=0, b=1, temp;

    for (int i=0; i<num; i++) {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
}

int main() {
    int num;
    cin >> num;
    fib(num);
    return 0;
}