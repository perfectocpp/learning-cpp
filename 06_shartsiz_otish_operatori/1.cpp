#include <iostream>

using namespace std;

int main() {

    int number;

    here:
        cout << "enter numbers [1;7]\n";
        cin >> number;
    
    if (1 <= number && number <= 7) {
        goto here;
    }

    return 0;
}