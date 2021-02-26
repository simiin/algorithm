#include <iostream>

using namespace std;

int main(void) {

	int n = 0;

	cin >> n;

	if (n > 0) {

		cout << "plus" << '\n';

		if ((n % 2) == 0) {
			cout << "even";
		} else {
			cout << "odd";
		}
	
	} else {

		cout << "minus" << '\n';

		if ((n % 2) == 0) {
			cout << "even";
		} else {
			cout << "odd";
		}

	}


	return 0;

}
