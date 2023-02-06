#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numbers[5] = {1, 5, 2, 4, 3};

    cout << *begin(numbers) << endl;
    cout << *(end(numbers)-1) << endl;

    sort(begin(numbers), end(numbers));

    for (int number : numbers) {
        cout << number << ", ";
    }

    cout << "\n";

    return 0;
}