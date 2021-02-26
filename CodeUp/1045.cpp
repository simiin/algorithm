#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	int a = 0, b = 0;

	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << round((float)a / b * 100) / 100 << endl;

	return 0;

}
