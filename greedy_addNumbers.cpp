/*
문제
강민이가 초등학교 3학년일 때, 담임선생님이 이런 문제를 냈었다.

숫자 1, 2, 7, 8, 9 를 사용해서 만든 두 숫자를 더했을 때, 나올 수 있는 가장 작은 수는 무엇일까요?
강민이는 이 문제의 답이 207(78 + 129)이라고 생각했다. 그런데 선생님은 책 4페이지에 있는 비슷한 문제를 모두 풀어오라는 숙제를 내셨다. 

작년부터 프로그래밍을 시작한 강민이는 이런 숙제보다 코딩을 더 재밌어했다. 그래서 강민이는 이 숙제를 코딩으로 해결하기로 했다!

어린 강민이를 위해 코딩을 도와주자.

입력
한 줄에 하나씩 연습문제가 주어진다.

각 줄에서 첫 번째로 나오는 정수 N (2 ≤ N ≤ 14) 은 연습문제에서 사용될 숫자의 개수이다.

두 번째부터 사용될 N개의 숫자가 주어진다. 0이 아닌 수가 최소 2개 이상 존재한다

마지막 줄에 0을 입력하면 프로그램이 종료된다.

출력
각 연습문제마다 정답을 출력한다.
*/


























#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {

	int n;
	scanf("%d", &n);

	while(n != 0) {

		vector<int> num;
		vector<int> zeros;

		for(int i=0; i<n; i++) {
			int input;
			scanf("%d", &input);

			if(input == 0) {
				zeros.push_back(input);
			} else {
				num.push_back(input);
			}
		}

		sort(num.begin(), num.end(), greater<int>());

		string temp1 = "", temp2 = "";

		temp1 += to_string(num[num.size() - 1]);
		num.pop_back();
		temp2 += to_string(num[num.size() - 1]);
		num.pop_back();

		while (!zeros.empty()) {

			temp1 += to_string(0);
			zeros.pop_back();

			if(zeros.empty()) {
				break;
			}

			temp2 += to_string(0);
			zeros.pop_back();
		}

		while(!num.empty()) {

			if(temp1.length() > temp2.length()) {
				
				int temp = num.back();
				temp2 += to_string(temp);
				num.pop_back();

				if(num.empty()) {
					break;
				}

				temp = num.back();
				temp1 += to_string(temp);
				num.pop_back();
			} else {

				int temp = num.back();
				temp1 += to_string(temp);
				num.pop_back();
				
				if(num.empty()) {
					break;
				}

				temp = num.back();
				temp2 += to_string(temp);
				num.pop_back();
			}
		}

		int result = stoi(temp1) + stoi(temp2);
		printf("%d\n", result);

		scanf("%d", &n);
	}

	return 0;
}






















