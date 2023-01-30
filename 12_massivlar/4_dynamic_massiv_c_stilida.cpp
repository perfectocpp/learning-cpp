// c stilida dynaimc massiv hosil qilish

#include <iostream>
#include <alloca.h>

using namespace std;

int main() {
    int n, s = 0;
    int *volume;

    cout << "n = "; cin >> n;

    //malloc n ta int toifasidagi element uchun xotiradan joy ajratadi. Va volume ga o'zlashtirildi!
    volume = (int*) malloc (n * sizeof(int));

    if (volume == NULL) {
        cout << "storage is fill!\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "[" << i << "] = ";     cin >>volume[i];
    }

    for (int i = 0; i < n; i++) {
        cout << volume[i] << ", ";
    }

    cout << endl;

    // band qilingan joyni bo'shatish
    free(volume);

    return 0;

}