/*
����
�����̰� �ʵ��б� 3�г��� ��, ���Ӽ������� �̷� ������ �¾���.

���� 1, 2, 7, 8, 9 �� ����ؼ� ���� �� ���ڸ� ������ ��, ���� �� �ִ� ���� ���� ���� �����ϱ��?
�����̴� �� ������ ���� 207(78 + 129)�̶�� �����ߴ�. �׷��� �������� å 4�������� �ִ� ����� ������ ��� Ǯ������ ������ ���̴�. 

�۳���� ���α׷����� ������ �����̴� �̷� �������� �ڵ��� �� ��վ��ߴ�. �׷��� �����̴� �� ������ �ڵ����� �ذ��ϱ�� �ߴ�!

� �����̸� ���� �ڵ��� ��������.

�Է�
�� �ٿ� �ϳ��� ���������� �־�����.

�� �ٿ��� ù ��°�� ������ ���� N (2 �� N �� 14) �� ������������ ���� ������ �����̴�.

�� ��°���� ���� N���� ���ڰ� �־�����. 0�� �ƴ� ���� �ּ� 2�� �̻� �����Ѵ�

������ �ٿ� 0�� �Է��ϸ� ���α׷��� ����ȴ�.

���
�� ������������ ������ ����Ѵ�.
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






















