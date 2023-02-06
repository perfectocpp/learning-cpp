// C++ program to demonstrate public
// access modifier

#include<iostream>

using namespace std;

// declare class
class Circle {
	public:
		double radius;
		
		double compute_area() {

			return 3.14 * radius * radius;
		}
};

// main function
int main() {

	Circle obj;
	
	// accessing public datamember outside class
	obj.radius = 10;
	
	cout << "Radius is: " << obj.radius << "\n";
	cout << "Area is: " << obj.compute_area() << endl;

	return 0;
}
