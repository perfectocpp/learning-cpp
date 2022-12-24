#include <iostream>

using namespace std;

int main() {

    float x, result = 0;

    x = 2;

    if (((x <= 0) && (x < 1)) || ((x <= 2) && (x < 3))) {
        result = 1;
    } else if (((x <= 1) && (x < 2)) || ((x <= 3) && (x < 4))) {
        result = -1;
    }

    cout << "result: " << result << endl;

    return 0;
}