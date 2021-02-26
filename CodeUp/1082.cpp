#include <iostream>

using namespace std;

int main(void) {

	int n = 0;

	cin >> hex >> n;

	for (int i = 1; i < 16; i++) {

		cout << uppercase << hex << n << '*' << i << '=' << (n*i) << '\n';

	}

	return 0;

}
