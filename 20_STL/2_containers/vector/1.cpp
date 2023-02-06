// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers;

	for (int i = 1; i <= 5; i++)
		numbers.push_back(i);

	cout << "Output of begin and end: ";
	for (auto i = numbers.begin(); i != numbers.end(); ++i) {

		cout << *i << " ";
    }

	cout << "\nOutput of cbegin and cend: ";
	for (auto i = numbers.cbegin(); i != numbers.cend(); ++i) {
		
        cout << *i << " ";
    }

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = numbers.rbegin(); ir != numbers.rend(); ++ir) {
	
    	cout << *ir << " ";
    }

	cout << "\nOutput of crbegin and crend : ";
	for (auto ir = numbers.crbegin(); ir != numbers.crend(); ++ir) {
	
    	cout << *ir << " ";
    }

    cout << endl;
	return 0;
}
