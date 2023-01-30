// c stilida dynaimc massiv hosil qilish

#include <iostream>

using namespace std;

int main() {
    int n, s = 0;
    int *volume;

    cout << "n = "; cin >> n;

    //new n ta int toifasidagi element uchun xotiradan joy ajratadi. Va volume ga o'zlashtirildi!
    volume = new int[n];

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
    delete []volume;

    return 0;

}