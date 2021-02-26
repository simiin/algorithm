#include <iostream>

using namespace std;

int main(void) {

	int score = 0;

	cin >> score;

	if ((score <= 100) && (score >= 90)) {
		cout << 'A';
	} else if ((score < 90) && (score >= 70)) {
		cout << 'B';
	} else if ((score < 70) && (score >= 40)) {
		cout << 'C';
	} else if ((score < 40) && (score >= 0)) {
		cout << 'D';
	}

	return 0;

}
