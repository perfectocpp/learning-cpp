#include <iostream>

using namespace std;

int main(){
    int m, n, matrix[9][9] = {0};
    m = sizeof(matrix[0]) / sizeof(int);
    n = sizeof(matrix) / sizeof(matrix[0]);

    pritnMatrix(m, n, matrix);
}

int max(int n, int array[]) {
    int max = array[0];

    for (int i = 0; i < n; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

void pritnMatrix(int m, int n, int matrix[9][9]) {

    for (int i = 0; i < m; i ++) {

        for (int j = 0; j < n; j++) {
            if ((i == j) || i + j == m - 1) {
                matrix[i][j] = 1;
            }
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}