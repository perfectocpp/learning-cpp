#include <iostream>

using namespace std;

int main() {

    int number1 = 7, number2 = 15;
    int i = number1;

    here:
        cout << i << endl;
        i++;
      
        if (i <= number2) {
            goto here;
        }

    return 0;
}