#include <iostream>

using namespace std;

int main() {
    
    int a = 5, b = 4, c = -3;

    cout << (((a > b) && (b > c)) || ((a < b) && (b < c)))<< endl;

    return 0;
}