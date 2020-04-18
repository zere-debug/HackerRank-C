
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cin >> a;
    cin >> b;

    cout << a.size() << " " << b.size();
    cout << endl;

    cout << a + b;
    cout << endl;

    string d = a;
    a[0] = b[0];
    b[0] = d[0];
    cout << a << " " << b;

    return 0;
}
