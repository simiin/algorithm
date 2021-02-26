#include <iostream>

using namespace std;

int main(void) {

	int n = 0, m = 0;

	cin >> n;

reget:

	cin >> m;
	cout << m << '\n';

	n = n - 1;

	if (n != 0) {
		goto reget;
	}	

	return 0;

}
