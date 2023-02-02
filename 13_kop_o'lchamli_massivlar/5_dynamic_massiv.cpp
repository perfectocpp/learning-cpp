#include <iostream> 

using namespace std;

int main() {
    int m = 3, n = 3, **ptr;

    ptr = new int *[m];

    for (int i = 0; i < n; i++) {
        ptr[i] = new int [n];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "[" << i << "][" << j << "] = ";
            cin >> ptr[i][j];
        }
    }

    printf("\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << ptr[i][j] << "  ";
        }

        cout << endl;
    }

    for (int i = 0; i < m; i++) {

        delete []ptr[i];
    }
    delete []ptr;

    return 0;
}