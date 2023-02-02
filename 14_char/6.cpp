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

    char word[] = "salar";

    for (int i = 0; i < 4; i++) {
        if (strncpy(words[i], word, 2) == 0) {
            cout << words[i] << endl;
        }
    }

    return 0;
}