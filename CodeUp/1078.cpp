#include <iostream>

using namespace std;

int main(void) {

	int n = 0, sum = 0;

	cin >> n;

	for (int i = 0; i <= n; i++) {

		if ((i % 2) == 0) {

			sum = sum + i;

		}

	}

	cout << sum << endl;

	return 0;

}
