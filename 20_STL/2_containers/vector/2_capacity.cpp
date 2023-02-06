#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> numbers = {1, 2, 3, 4, 5, 6};

    cout << "size of vector: " << numbers.size() << endl;
    cout << "capacity of vector: " << numbers.capacity() << endl;
    cout << "max_size of vector: " << numbers.max_size() << endl;
    for (auto i = numbers.begin(); i != numbers.end(); ++i) {
        cout << *i << ", ";
    }

    numbers.resize(2);
    cout << "\n\nafter resized:\n";
    cout << "size of vector: " << numbers.size() << endl;
    cout << "capacity of vector: " << numbers.capacity() << endl;
    cout << "max_size of vector: " << numbers.max_size() << endl;

    for (auto i = numbers.begin(); i != numbers.end(); ++i) {
        cout << *i << ", ";
    }
    cout << endl;

    cout << "\nis empty: "<<numbers.empty() << endl;

    numbers.resize(0);
    cout << "\nafter resized 2 -> 0! is empty: "<<numbers.empty() << endl;

    numbers.resize(15);
    cout << "\n\nafter resized 3:\n";
    cout << "size of vector: " << numbers.size() << endl;
    cout << "capacity of vector: " << numbers.capacity() << endl;
    cout << "max_size of vector: " << numbers.max_size() << endl;

    for (auto i = numbers.begin(); i != numbers.end(); ++i) {
        cout << *i << ", ";
    }

    numbers.resize(5);
    cout << "\n\nafter resized 4:\n";
    cout << "size of vector: " << numbers.size() << endl;
    cout << "capacity of vector: " << numbers.capacity() << endl;
    cout << endl;

    numbers.shrink_to_fit();
    cout << "\n\nafter shrink_to_fited 4:\n";
    cout << "size of vector: " << numbers.size() << endl;
    cout << "capacity of vector: " << numbers.capacity() << endl;
    cout << endl;
    

}