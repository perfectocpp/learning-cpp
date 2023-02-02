#include <iostream>

using namespace std;

int fuct(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fuct(n-1);
}

int main() {

    cout << fuct(5) << endl;

    return 0;
}