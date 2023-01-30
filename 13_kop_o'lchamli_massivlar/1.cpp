#include <iostream>

using namespace std;

int main(){
    int m, n, matrix[10][10];

    cout << "satrlar sonini kiriting: ";     cin >> m;
    cout << "ustunlar sonini kiriting: ";    cin >> n;

    cout << "massiv elememtlarini kiriting: \n";

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) {
        cout << "matrix[" << i << "][" << j << "] = ";
        cin >> matrix[i][j];
    }

    for (int i = 0; i < m; i ++) {

        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }

        cout << endl;
    }

    system("pause");

    return 0;
}