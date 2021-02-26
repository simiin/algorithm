#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string input, char delimiter);

int main(void) {

	string str = "";

	cin >> str;
	vector<string> result = split(str, '.');

	for (int i=0; result.size(); i++) {
		cout << result[i] << endl;
	}

	return 0;

}

vector<string> split(string input, char delimiter) {

	vector<string> answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)) {
		answer.push_back(temp);
	}

	return answer;

}
