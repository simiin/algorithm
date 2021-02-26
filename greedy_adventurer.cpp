/*
n명의 모험가
모험가 당 x의 공포도
공포도 x인 모험가는 반드시 x명이상으로 아루어진 팀으로 모험을 나갈 수 있다

모험 팀을 최대한 많이 만들어보자
*/





























#include <bits/stdc++>

int n;
vector<int> arr;

int main(void) {
	cin >> n;
	for(int i=0; i<n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end());

	int result = 0;
	int cnt = 0;
	for(int i=0; i<n; i++) {
		cnt += 1;
		if(cnt >= arr[i]) {
			result += 1;
			cnt = 0;
		}
	}
	cout << result << '\n';
}
