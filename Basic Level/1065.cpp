//
// Created by oldzhg on 2020-01-29.
//
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int N, M, a, b;
    scanf("%d", &N);
    vector<int> couple(100000, -2);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &a, &b);
        couple[a] = b;
        couple[b] = a;
    }
    scanf("%d", &M);
    vector<int> guest(M), isExist(100000);
    set<int> s;
    for (int j = 0; j < M; ++j) {
        scanf("%d", &guest[j]);
        if (couple[guest[j]] != -2) isExist[couple[guest[j]]] = 1;
    }
    for (int k = 0; k < M; ++k) {
        if (!isExist[guest[k]]) s.insert(guest[k]);
    }
    printf("%d\n", s.size());
    for (auto it = s.begin(); it != s.end(); it++) {
        if (it != s.begin()) printf(" ");
        printf("%05d", *it);
    }
    return 0;
}
