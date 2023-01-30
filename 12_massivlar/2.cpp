#include <bits/stdc++.h>

using namespace std;

int main() {
    int const lenth  = 3;
    int numbers[lenth] = { 0 };
    
    for (int i = 0; i < lenth; i++) {
        cout << "[" << i << "] = ";
        cin >> numbers[i];
    }

    for (int i = 0; i < lenth; i++) {
        cout << setfill(' ') << setw(4) << numbers[i] << "             ";
    }

    cout << endl;

    for (int i = 0; i < lenth; i++) {
        cout << &numbers[i] << "; ";
    }

    cout << endl;

    return 0;
}
