#include <iostream>

using namespace std;

int main(void) {

	int a = 0, b = 0, c = 0, temp = 0, result = 0;

	cin >> a >> b >> c;

	temp = a>b ? a:b;
	result = temp>c ? temp:c;

	cout << result;

	return 0;

}
