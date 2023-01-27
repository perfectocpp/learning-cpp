#include <bits/stdc++.h>

using namespace std;

struct Car {
    string name;
    string color;
    int engine;
} firsCar = {"car", "oq", 120};

int main(){
    struct Car car = {name: "Nexia I", color: "oq", engine: 180};
    car.engine += 20;

    cout << car.name << ", "<< car.color << ", " <<  car.engine << endl;
    cout << firsCar.name << ", "<< firsCar.color << ", " <<  firsCar.engine << endl;

    return 0;
}
