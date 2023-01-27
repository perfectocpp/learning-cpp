#include <bits/stdc++.h>

using namespace std;

struct Car {
    string name;
    string color;
};

int main(){
    struct Car car1{"Malibu", "oq"};

    struct Car* car2 = &car1;
  
    cout << 
        car1.name << ", "<< car1.color << endl << 
        car2 -> name << ", "<< car2 -> color << endl;

    return 0;
}
