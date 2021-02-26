#include <iostream>

using namespace std;

int main(void) {

	int n = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {

		if ((i % 3) == 0) {

			cout << "X ";

		} else {

			cout << i << ' ';

		}

	}

	cout << endl;

	return 0;

}
