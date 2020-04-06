#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		if (i == 1) { cout << "one"; cout << endl; }
		if (i == 2) { cout << "two"; cout << endl; }
		if (i == 3) { cout << "three"; cout << endl; }
		if (i == 4) { cout << "four"; cout << endl; }
		if (i == 5) { cout << "five"; cout << endl; }
		if (i == 6) { cout << "six"; cout << endl; }
		if (i == 7) { cout << "seven"; cout << endl; }
		if (i == 8) { cout << "eight"; cout << endl; }
		if (i == 9) { cout << "nine"; cout << endl; }

		if ((i > 9) && (i % 2 == 0)) { cout << "even"; cout << endl; }
		if ((i > 9) && (i % 2 != 0)) { cout << "odd"; cout << endl; }
	}
	
	return 0;
}

