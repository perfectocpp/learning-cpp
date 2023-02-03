#include <iostream>

using namespace std;

int fibo(int);

int main() {
    cout << fibo(7) << endl;
}

int fibo(int number) {

    if (number == 0 || number == 1) {
        return 1;
    }

    return fibo(number - 1) + fibo(number - 2);
}