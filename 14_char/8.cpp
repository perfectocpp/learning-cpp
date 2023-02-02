#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char str[] = "www xxx zzz";
    char * pchar;

    pchar = strstr(str, "zzz");

    strcpy(pchar, "www");

    cout << str << endl;
    
    return 0;
}