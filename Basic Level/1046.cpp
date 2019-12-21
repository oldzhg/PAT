//
// Created by oldzhg on 2019-12-21.
//
#include <iostream>

using namespace std;

int main() {
    int jiahan, yihan, jiahua, yihua, N, cnt1 = 0, cnt2 = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> jiahan >> jiahua >> yihan >> yihua;
        if (jiahua == jiahan + yihan && yihua != jiahan + yihan) cnt2++;
        if (yihua == jiahan + yihan && jiahua != jiahan + yihan) cnt1++;
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}
