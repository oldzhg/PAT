#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, t, A1, A2;
    double A4;
    cin >> n;
    vector<vector<int>> v(5);
    for (int i = 0; i < n; ++i) {
        while (cin >> t) {
            if (t % 5 == 0) v[0].push_back(t);
            if (t % 5 == 1) v[1].push_back(t);
            if (t % 5 == 2) v[2].push_back(t);
            if (t % 5 == 3) v[3].push_back(t);
            if (t % 5 == 4) v[4].push_back(t);
        }
    }

    A1 = 0;
    for (int j : v[0]) {
        if (j % 2 == 0) A1 += j;
    }
    if (A1 != 0) cout << A1 << " ";
    else cout << "N ";

    A2 = 0;
    for (int k = 0; k < v[1].size(); ++k) {
        if (k % 2 == 0) A2 += v[1][k];
        else A2 -= v[1][k];
    }
    if (!v[1].empty()) {
        cout << A2 << " ";
    } else {
        cout << "N ";
    }

    if (!v[2].empty()) cout << v[2].size() << " ";
    else cout << "N ";

    A4 = 0;
    for (int l : v[3]) {
        A4 += l;
    }
    if (A4 != 0) printf("%.1f ", A4 / v[3].size());
    else cout << "N ";

    if (v[4].empty()) cout << "N";
    else {
        sort(v[4].begin(), v[4].end());
        cout << v[4].back();
    }

    return 0;
}
