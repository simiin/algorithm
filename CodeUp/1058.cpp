#include <iostream>

using namespace std;

int main(void) {

	int a = 0, b = 0;

	cin >> a >> b;
	
	cout << (!a && !b) << '\n';
	cout << !(a || b) << '\n';

	return 0;

}
