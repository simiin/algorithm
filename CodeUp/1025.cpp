#include <iostream>

using namespace std;

int main(void) {

	int a = 0, b = 0, c = 0, d = 0, e = 0;

	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	cout << "[" << a * 10000 << "]" << endl;
	cout << "[" << b * 1000 << "]" << endl;
	cout << "[" << c * 100 << "]" << endl;
	cout << "[" << d * 10 << "]" << endl;
	cout << "[" << e << "]" << endl;

	return 0;

}
