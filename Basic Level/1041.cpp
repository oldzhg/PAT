//
// Created by oldzhg on 2019-12-20.
//
#include <iostream>

using namespace std;

int main() {
    int N, M;
    long long list[1001][3] = {0};
    scanf("%d", &N);
    for (int k = 0; k < N; ++k) {
        scanf("%lld %lld %lld", &list[k][0], &list[k][1], &list[k][2]);
    }
    scanf("%d", &M);
    int find[1001];
    for (int l = 0; l < M; ++l) {
        scanf("%d", &find[l]);
        for (int i = 0; i < N; ++i) {
            if (find[l] == list[i][1])
                cout << list[i][0] << " " << list[i][2] << endl;
        }
    }
    return 0;
}
