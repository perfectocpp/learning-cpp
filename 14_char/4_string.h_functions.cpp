#include <iostream>
#include <string.h>

using namespace std;
void copy() {
     char charSery[] = "kaltak yegiz kelyaptimi?";
    char charSery_2[30];
    char charSery_3[30];

    cout << charSery << endl;

    cout << "strlen - lenth: " << strlen(charSery) << endl;

    strcpy(charSery_2, charSery);
    cout << "strcpy - copy: copied sery -> " << charSery_2 << endl;

    strncpy(charSery_3, charSery, 5);
    charSery_3[5] = '\0';
    cout << "strcpy - copy n elements : copied sery -> " << charSery_3 << endl;
}

void cancat() {
    char charSery[30] = "Assalmu";

    strcat(charSery, "alaikum!");

    cout << charSery << endl;

    strncat(charSery, " Yaxshimisizlar?", 12);

    cout << charSery << endl;
}
void compare() {
    char word1[6] = "salom", word2[6] = "salom", word3[4] = "sal";

    bool equal = strcmp(word1, word2);
    cout << equal << endl;

    equal = strncmp(word1, word2, 3);
    cout << equal << endl;
}
int main() {
    
    // cout << "strcopy: \n";
    // copy();

    // cout << "\nstrcat: \n";
    // cancat();

    cout << "\nstrcmp: \n";
    compare();

    return 0;
}
