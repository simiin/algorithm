#include <iostream>

using namespace std;

int main(void) {

	int r = 0, b = 0, g = 0, count = 0;

	cin >> r >> b >> g;

	for (int i = 0; i < r; i++) {

		for (int j = 0; j < b; j++) {

			for (int k = 0; k < g; k++) {

				cout << i << ' ';
				cout << j << ' ';
				cout << k << '\n';

				count = count + 1;

			}

		}

	}

	cout << count << '\n';

	return 0;
}
