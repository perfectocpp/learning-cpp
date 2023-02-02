#include <iostream>
#include <string.h>


using namespace std;

int main() {
    char charArray[7];

    cin.getline(charArray, sizeof(charArray));

    cout << "sizeof(charrArray) = " << sizeof(charArray);
    cout << "strlen(charrArray) = " << strlen(charArray);


}