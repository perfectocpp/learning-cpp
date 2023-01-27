#include <bits/stdc++.h>

using namespace std;

class Car {
    private:
        string class_name = "car";

        void print_class_name () {
            cout << this->class_name << endl;
        }

    public:
        string name;

        void print_car_name () {
            print_class_name();
            cout << this->name << endl;
        }
};

int main() {
    Car car;

    car.name = "Nexia I";

    cout << car.name << endl;
    car.print_car_name();

    return 0;
}