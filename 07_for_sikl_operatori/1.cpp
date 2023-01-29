#include <iostream>

using namespace std;

int main() {
    int n = 2;
    bool idf = true;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            idf = false;
            break;
        }
    }

    if (idf && n > 1) {
        cout << "kiritilgan son tub\n";
    }

    return 0;
}