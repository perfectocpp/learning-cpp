#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char password[9] = "password", password2[9];
    int idf, n = 3;

    do {
        cout << "enter password: ";
        cin.getline(password2, sizeof(password2));

        idf = strcmp(password, password2);
        if (idf) {
            n--;
            cout << "pasword is error!\n";
        }

        if (n == 0) {
            break;
        }

    } while (idf);
   
    if (!idf) {
        cout << "welcome\n";
    } else {
        cout << "retry again\n";
    }
    return 0;
}