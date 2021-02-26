#include <iostream>

using namespace std;

int main(void) {

	char a = 'a', b = 'a';

	cin >> b;

	do {
		cout << a << ' ';

		a = a + 1;

	} while (a <= b);

	cout << endl;

	return 0;

}
