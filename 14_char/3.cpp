#include <iostream>

using namespace std;

int main() {
    char *charPtr;

    char charSery[] = "Assalamualaikum";

    charPtr = charSery;
    cout << charSery << endl;

    while (*charPtr != '\0') {
        cout << *charPtr << " = " << (int)*charPtr << "; ";
        charPtr++;
    }
    
    return 0;
}