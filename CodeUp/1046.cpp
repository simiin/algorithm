#include <iostream>
#include <typeinfo>

using namespace std;

int main(void) {

	int x = 0, y = 0, z = 0;

	cin >> x >> y >> z;

	//cout << typeid((float)x).name() << '\n';

	cout << x + y + z << '\n';

	cout << fixed;
	cout.precision(1);
	cout << (float)(x + y + z) / (float)3 << '\n';

	return 0;

}
