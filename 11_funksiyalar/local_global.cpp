#include <iostream>

using namespace std;

int number = 7;

int main (){
    int number = 5;

    cout << "local: " << number << endl;
    cout << "global: " << ::number << endl;
    
} // namespace std;
