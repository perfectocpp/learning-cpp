// C++ program to demonstrate private
// access modifier

#include<iostream>
using namespace std;

class Circle {
	// private data member
	private:
		double radius;
	
	// public member function
	public:
		double compute_area(int r) { 
            // member function can access private
			// data member radius
            //directly inside in member function the class
            radius = r;
			return 3.14*radius*radius;
		}
};

// main function
int main() {
	// creating object of the class
    int r = 10;
	Circle obj;
	
	// trying to access private data member
	// directly outside the class
	//obj.radius = 1.5;   // <=
    // ERROR: member "Circle::radius" (declared at line 10) is inaccessibleC/C++(265)
	
	cout << "Area is:" << obj.compute_area(r) << endl;

	return 0;
}
