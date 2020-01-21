//
// Created by oldzhg on 2019-12-24.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
    string name;
    int height;
};

int cmp(struct node a, struct node b) {
    return a.height != b.height ? a.height > b.height : a.name < b.name;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<node> stu(N);
    for (int i = 0; i < N; ++i) {
        cin >> stu[i].name >> stu[i].height;
    }
    sort(stu.begin(), stu.end(), cmp);
    int m, t = 0, row = K;
    while (row) {
        if (row == K) m = N - (N / K) * (K - 1);
        else m = N / K;
        vector<string> ans(m);
        ans[m / 2] = stu[t].name;
        int j = m / 2 - 1;
        for (int i = t + 1; i < t + m; i += 2) {
            ans[j--] = stu[i].name;
        }
        j = m / 2 + 1;
        for (int i = t + 2; i < t + m; i += 2) {
            ans[j++] = stu[i].name;
        }
        for (int k = 0; k < m - 1; ++k) {
            cout << ans[k] << " ";
        }
        cout << ans[m - 1] << endl;
        t += m;
        row--;
    }
    return 0;
}
