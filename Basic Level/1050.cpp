//
// Created by oldzhg on 2019-12-23.
//
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int m = 0, n = 0, temp;

    for (int i = static_cast<int>(sqrt(N)); i > 0; i--) {
        if (N % i == 0) {
            m = N / i;
            n = i;
            break;
        }
    }

    vector<int> a;
    for (int j = 0; j < N; ++j) {
        scanf("%d", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int w[m][n];
    memset(w, 0, sizeof(w));

    int x = 0, y = 0, p = 0;
    w[x][y] = a[p++];


    while (p < N) {
        while (y + 1 < n && !w[x][y + 1]) {
            w[x][++y] = a[p];
            p++;
        }
    }


    for (int l = 0; l < m; ++l) {
        for (int i = 0; i < n; ++i) {
            printf("%d", w[l][i]);
            if (i != m - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
