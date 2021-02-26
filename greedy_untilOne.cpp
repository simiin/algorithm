/*
n이라는 수가 주어질 때,
1. k를 나누거나
2. 1을 빼거나
해서 최종적으로 1이 될 때까지 계산할 때,

가장 적은 횟수는?
*/



































#include <bits/stdc++.h>

using namespace std;

int n, k;
int result;

int main(void) {
    cin >> n >> k;

    while(true) {
        int target = (n / k) * k;
        result += (n - target);
        n = target;

        if(n < k) break;

        result++;
        n /= k;
    }

    result += (n-1);
    cout << result << "\n";
}
