#include <bits/stdc++.h>

using namespace std;

int main() {

    int numbers[6] = {1, 3, 2, 5, 4, 0};
    int len = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < len; i++) {

        cout << numbers[i] << ", ";
    }

    cout << endl;

    for (int i = 0; i < len - 1; i++) {

        for (int j = i+1; j < len; j++) {

            if (numbers[i] > numbers[j]) {

                int saver = numbers[i];
                numbers[i] = numbers[j];
                numbers[j]= saver;
            }
 
            // cout << "i = " << i << "; j = " << j << "         ";
            // getch();
            // for (int k = 0; k < len; k++) {
            //     cout << numbers[k] << " " << endl;
            // }
        }
    }

    for (int i = 0; i < len; i++) {

        cout << numbers[i] << ", ";
    }

    cout << endl;

    return 0;
}