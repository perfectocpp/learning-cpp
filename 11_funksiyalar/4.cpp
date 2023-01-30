#include <iostream>

using namespace std;

int max(int, int);
int invertDigit(int);

int main() {

    int a = 1, b = 3, c = 2, d = 4;

    cout << max(max(a, b), max(c, d)) << endl;
    cout << invertDigit(123456789) << endl;

    return 0;
}

int max(int a, int b) {

    return (a > b) ? a : b;
}

int invertDigit(int number) {
    
    int rebmun = 0;

    while (number >= 1) {

        rebmun *= 10;
        rebmun += number % 10;
        number /= 10;
    }

    return rebmun;
}