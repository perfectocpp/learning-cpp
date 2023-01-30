#include <iostream>

using namespace std;

int main() {
    
    int number = 7;
    int &son = number;

    cout << number << "; " << son << endl;

    son = 4;
    cout << number << "; " << son << endl;

    son += number;
    cout << number << "; " << son << endl;

    return 0;
}