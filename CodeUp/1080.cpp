#include <iostream>

using namespace std;

int main(void) {

	int n = 0, sum = 0, result = 0;

	cin >> n;

	for (int i = 0; i <= n; i++) {

		 sum = sum + i;

		 if (sum > n) {
			 break;
		 }

		 result = i;

	}

	cout << result << endl;

	return 0;

}
