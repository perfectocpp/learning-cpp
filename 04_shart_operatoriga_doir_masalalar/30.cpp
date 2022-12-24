#include <iostream>

using namespace std;

int main(){
    int a = 3, b = 3, c = 3;

    if ((a==b) && (a == c) && (b == c)) {
        cout << "teng tomonli\n";
        return 0;
    }

    cout << "teng tomonli emas!\n";

    return 0;
}