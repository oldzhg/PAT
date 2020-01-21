//
// Created by oldzhg on 2020-01-21.
// 排序从小到大,然后倒叙遍历,定义一个起始天数num与数组元素作比较即可,num一直增大,直到num大于ans[i]的元素,跳出循环,输出num-1的值
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, cnt = 1;
    cin >> N;
    vector<int> ans;
    for (int i = 0; i < N; ++i) {
        int k;
        cin >> k;
        ans.push_back(k);
    }
    sort(ans.begin(), ans.end());
    for (int l = N - 1; l >= 0; l--) {
        if (ans[l] <= cnt) break;
        cnt++;
    }
    cout << cnt - 1;
    return 0;
}
