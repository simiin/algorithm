#include <iostream>

using namespace std;

int main(void) {

	char score = 0;
	cin >> score;

	switch (score) {
		case 'A':
			cout << "best!!!";
			break;
		case 'B':
			cout << "good!!";
			break;
		case 'C':
			cout << "run!";
			break;
		case 'D':
			cout << "slowly~";
			break;
		default:
			cout << "what?";
	}

	return 0;

}
