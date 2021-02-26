/*
����
�ر԰� ������ �ִ� ������ �� N�����̰�, ������ ������ �ſ� ���� ������ �ִ�.
������ ������ ����ؼ� �� ��ġ�� ���� K�� ������� �Ѵ�. �̶� �ʿ��� ���� ������ �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� N�� K�� �־�����. (1 �� N �� 10, 1 �� K �� 100,000,000)
��° �ٺ��� N���� �ٿ� ������ ��ġ Ai�� ������������ �־�����. (1 �� Ai �� 1,000,000, A1 = 1, i �� 2�� ��쿡 Ai�� Ai-1�� ���)

���
ù° �ٿ� K���� ����µ� �ʿ��� ���� ������ �ּڰ��� ����Ѵ�.
*/









































#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, k;
	int result = 0;

	scanf("%d%d", &n, &k);

	vector<int> coin(n);

	for(int i=0; i<n; i++) {
		scanf("%d", &coin[i]);
	}

	for(int i=coin.size()-1; i>=0; i--) {
		while(k >= coin[i]) {
			result += 1;
			k -= coin[i];
		}
	}

	if(k > 0) {
		result += 1;
	}

	printf("%d\n", result);

	return 0;
}
