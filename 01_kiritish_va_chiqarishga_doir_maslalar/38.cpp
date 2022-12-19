// ax + b = 0; x = ?

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "ax + b = 0\n\n";
    cout << "a = ";     cin >> a;
    cout << "b = ";     cin >> b;

    cout << endl << a << "x + " << b << " = 0\n";
    cout << "x = " << -b << "/" << a << endl;
    cout << "x = " << (float)-b / (float)a << endl;

}