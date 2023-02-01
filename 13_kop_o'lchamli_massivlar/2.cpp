#include <iostream>

using namespace std;
void scanMatrix(int, int, int [10][10]);
void pritnMatrix(int, int, int matrix[10][10]);

int main() {
    int m, n, matrix[10][10];

    cout << "satrlar sonini kiriting: ";     cin >> m;
    cout << "ustunlar sonini kiriting: ";    cin >> n;

    scanMatrix(m, n, matrix);

    cout << "printed array: \n";
    pritnMatrix(m, n, matrix);
}

void scanMatrix(int m, int n, int matrix[10][10]) {

    for (int i = 0; i < m; i++) {
        
        for (int j = 0; j < n; j++) {
            
            cout << "matrix[" << i << "][" << j << "] = ";

            cin >> matrix[i][j];
        }
    }
}

void pritnMatrix(int m, int n, int matrix[10][10]) {

    for (int i = 0; i < m; i ++) {

        for (int j = 0; j < n; j++) {

            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
