// ko'rsatkich qiymatini o'zgartirish mumkin!
#include <iostream>

using namespace std;

int main (){
    int number1 = 5, number2 = 7;
    int *ptr;

    ptr  = &number1;

    cout << "ptr addresi: " << &ptr <<"; ptr qiymati: " << ptr << "; ptr qiymati ichidagi qiymat: " << *ptr << endl;

    ptr = &number2;
    cout << "ptr addresi: " << &ptr <<"; ptr qiymati: " << ptr << "; ptr qiymati ichidagi qiymat: " << *ptr << endl;


} 

