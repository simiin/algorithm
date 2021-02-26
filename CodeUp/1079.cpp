#include <iostream>

using namespace std;

int main(void) {

	char c = 0;
	bool flag = true;

	while (flag) {

		cin >> c;
		cout << c << '\n';

		if (c == 'q') {
			flag = false;
		}

	}

	return 0;

}

