//
// Created by oldzhg on 2019-12-19.
//
#include <iostream>

using namespace std;

int main() {
    int N, temp, n, score[101] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &temp);
        score[temp] ++;
    }
    scanf("%d", &n);
    for (int j = 0; j < n; ++j) {
        scanf("%d", &temp);
        cout << score[temp];
        if (j != n -1) cout << " ";
        else cout << endl;
    }
    return 0;
}