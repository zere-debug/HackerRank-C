
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

class Triangle {
public:
	void triangle() {
		cout << "I am a triangle" << endl;
	}
};

class Isosceles : public Triangle {
public:
	void isosceles() {
		cout << "I am an isosceles triangle" << endl;
	}

	void description() {
		cout << "An isoscele triangle has two equal sides" << endl;
	}
};

int main() {
	Isosceles isc;
	isc.isosceles();
	isc.description();
	isc.triangle();

	return 0;
}
