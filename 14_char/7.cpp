#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char words[][20] = {
        "salom",
        "salim",
        "sola",
        "suli",
    };

    char word[] = "sal";

    for (int i = 0; i < 4; i++) {
        if (strstr(words[i], word) != NULL) {
            cout << words[i] << endl;
        }
    }

    return 0;
}