#include <iostream>

using namespace std;


int ** createMatrix(int m, int n) {
    int **ptr;

    ptr = new int *[m];

    for (int i = 0; i < n; i++) {
        ptr[i] = new int [n];
    }

    return ptr;
}

void inputMatrix(int m, int n, int **ptr) {
    for (int i = 0; i < m; i++) {
        for (int j = 1; j < n; j++) {
            cin >> ptr[i][j];
        }
    }
}

void pritnMatrix(int m, int n, int **ptr) {
    for (int i = 0; i < m; i ++) {

        for (int j = 0; j < n; j++) {

            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
}


int main() {
    int m, n, k, **mPtr1, **mPtr2, **mPtr3;

    cout << " m1 matritsa satrlar sonini kiriting: m = ";   cin >> m;
    cout << " m2 matritsa ustunlar sonini kiriting: n = ";  cin >> n;
    cout << " m3 matritsa ustunlar sonini kiriting: k = ";  cin >> k;

    mPtr1 = createMatrix(m, n);
    mPtr2 = createMatrix(n, k);
    mPtr3 = createMatrix(m, k);

    cout << " m1 matritsa elementlarini kiriting:\n"; 

    cout << " m1 matritsa:\n"; 
    pritnMatrix(m, n, mPtr1);

    cout << " m2 matritsa:\n";
    pritnMatrix(n, k, mPtr2);

    cout << " m3 matritsa:\n";
    pritnMatrix(m, k, mPtr3);

    return 0;
}