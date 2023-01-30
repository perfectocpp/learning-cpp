#include <bits/stdc++.h>

using namespace std;

void add(int *, int *, int *);
void kub(int *);

int main() {

    int a, b, sum;

    a = 5, b = 7;

    add(&a, &b, &sum);

    cout << sum << endl;

    kub(&sum);

    cout << sum << endl;

    return 0;
}

void add(int *a, int *b, int *sum) {

    *sum = *a + *b;
}

void kub(int *number) {
    
    *number = pow(*number, 3);
}