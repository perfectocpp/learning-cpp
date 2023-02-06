#include <iostream>
#include <list>

using namespace std;

int main() {
    
    list <int> numbers = {1, 2, 3, 4, 5};

    for (auto number = numbers.begin(); number != numbers.end(); ++number) {
        cout << *number << endl;
    }

    return 0;
}