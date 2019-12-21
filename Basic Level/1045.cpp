//
// Created by oldzhg on 2019-12-21.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a[100001] = {1000000001};
    int N, max = 0;
    cin >> N;
    vector<int> b(N), c(N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for (int j = 0; j < N; ++j) {
        if (a[j] == b[j] && a[j] > max) {
            c.push_back(a[j]);
        }
        if (a[j] > max) max = a[j];
    }

    cout << c.size() - N << endl;
    if (c.size() - N != 0) {
        for (int l = N; l < c.size(); ++l) {
            cout << c[l];
            if (l != c.size() - 1) cout << " ";
        }
    } else cout << "\n";
    return 0;
}
