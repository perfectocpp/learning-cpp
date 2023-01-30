#include <iostream>

using namespace std;

int func() {

    return 5;
}

int qv(int a) {
    return a * a;
}

int main() {

    cout << func() << endl;
    cout << qv(5) << endl;
    
    return 0;
}

