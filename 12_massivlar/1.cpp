#include <iostream>

using namespace std;

int main() {

    int const lenth  = 10;
    int numbers[lenth] = { 0 };

    for (int i = 0; i < lenth; i++) {
        cout << *(numbers + i) << " ";
    }

    cout << endl;

    for (int i = 0; i < lenth; i++) {
        cout << "[" << i << "] elementni kiriting! ";
        cin >> numbers[i];
    }

    for (int i = 0; i < lenth; i++) {
        cout << *(numbers + i) << " ";
    }

    return 0;

}