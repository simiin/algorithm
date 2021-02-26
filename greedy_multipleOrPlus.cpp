/*
수 사이에 더하기 또는 곱하기 부호를 넣어서 가장 큰 수를 만들자 
*/









































#include <bits/stdc++.h>

using namespace std;

string str;

int main(void) {
	cin >> str;

	long long result = str[0] - '0';

	for(int i=1; i<str.size(); i++) {
		int num = str[i] - '0';
		if(num <= 1 || result <= 1) result += num;
		else result *= num;
	}

	cout << result << '\n';
}
