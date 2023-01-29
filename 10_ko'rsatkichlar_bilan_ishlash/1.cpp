#include <iostream>

using namespace std;

int main() {
    int number = 7;
    int *numberPtr;

    cout << number << endl;

    // & - adresni olish amali
    numberPtr = &number;

    *numberPtr *= *numberPtr;

    cout << number << endl;

    number++;

    cout << number << endl;

    return 0;
}