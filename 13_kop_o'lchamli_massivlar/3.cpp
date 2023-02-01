#include <iostream>

using namespace std;

int max(int n, int array[]) {
    int max = array[0];

    for (int i = 0; i < n; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

int main(){
    int m, n, matrix[10][10];

    cout << "satrlar sonini kiriting: ";     cin >> m;
    cout << "ustunlar sonini kiriting: ";    cin >> n;

    cout << "massiv elememtlarini kiriting: \n";

    for (int i = 0; i < m; i++) {
        
        for (int j = 0; j < n; j++) {
            
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++) {

        cout << i << " satrdagi max = " << max(n, &matrix[i][0]) << endl;
    }
}