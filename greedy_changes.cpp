/*
거스름돈 갯수가 최소가 되도록 거슬러주자
*/













































#include <bits/stdc++.h>

using namespace std;

int n = 1260;
int cnt;

int coinTypes[4] = {500, 100, 50, 10};

int main(void) {
    for(int i=0; i<4; i++) {
        cnt += n/coinTypes[i];
        n %= coinTypes[i];
    }

    cout << cnt << "\n";
}
