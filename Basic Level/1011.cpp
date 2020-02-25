#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        long long int A, B, C;
        cin >> A >> B >> C;
        printf("Case #%d: %s\n", i + 1, A + B > C ? "true" : "false");
    }
    return 0;
}

/* 使用二维数组寄存
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    vector<vector<long long int>> v(T);
    for (int i = 0; i < T; ++i) {
        int A, B, C = 0;
        cin >> A >> B >> C;
        v[i].push_back(A);
        v[i].push_back(B);
        v[i].push_back(C);
    }
    for (int k = 0; k < T; ++k) {
        if (v[k][0] + v[k][1] > v[k][2]) cout << "Case #" << k + 1 << ": true" << endl;
        else cout  << "Case #" << k + 1 << ": false" << endl;
    }
    return 0;
}
*/