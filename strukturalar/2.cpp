#include <bits/stdc++.h>

using namespace std;

struct Car {
    string name;
    string color;
};

int main(){
    struct Car cars[3] = {{"Nexia I", "oq"}, {"Malibu", "oq"}};
    int count = 0;
    
    cars[2].name = "Lada SW Cross"; cars[2].color = "oq";

    for(auto car: cars) {
        count++;
        cout << 
            "name car " << count << ": " << car.name << ", " << 
            "\ncolor car " << count << ": " << car.color << "\n\n";
    }

    return 0;
}
