#include <iostream>

using namespace std;

int main(void) {

	int n = 0, m = 0;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= m; j++) {

			cout << i << ' ' << j << '\n';

		}
	}

	return 0;

}
