#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	int h = 0, b = 0, c = 0, s = 0;
	float size = 0;

	cin >> h >> b >> c >> s;

	size = ((float)h * b * c * s) / (8 * 1024 * 1024);
	size = ceil(size * 10) / 10;

	cout << size << " MB" << endl;

	return 0;

}
