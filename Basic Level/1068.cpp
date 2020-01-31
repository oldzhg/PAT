//
// Created by oldzhg on 2020-01-31.
//
#include <iostream>
#include <map>

using namespace std;

int main() {
    int M, N, TOL;
    cin >> M >> N >> TOL;
    map<int, int> vis; // 独一无二
    int array[N][M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &array[i][j]);
            vis[array[i][j]]++;
        }
    }
    int count = 0;
    int x, y, color;
    x = y = color = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (vis[array[i][j]] == 1) {
                int c = array[i][j];
                // 上
                if (i - 1 >= 0) {
                    if (abs(c - array[i - 1][j]) <= TOL) continue;
                }
                // 下
                if (i + 1 <= N) {
                    if (abs(c - array[i + 1][j]) <= TOL) continue;
                }
                // 左
                if (j - 1 >= 0) {
                    if (abs(c - array[i][j - 1]) <= TOL) continue;
                }
                // 右
                if (j + 1 <= M) {
                    if (abs(c - array[i][j + 1]) <= TOL) continue;
                }
                // 左上
                if (j - 1 >= 0 && i - 1 >= 0) {
                    if (abs(c - array[i - 1][j - 1]) <= TOL) continue;
                }
                // 左下
                if (j - 1 >= 0 && i + 1 <= N) {
                    if (abs(c - array[i + 1][j - 1]) <= TOL) continue;
                }
                // 右上
                if (i - 1 >= 0 && j + 1 <= M) {
                    if (abs(c - array[i - 1][j + 1]) <= TOL) continue;
                }
                // 右下
                if (i + 1 <= N && j + 1 <= M) {
                    if (abs(c - array[i + 1][j + 1]) <= TOL) continue;
                }
                x = i;
                y = j;
                color = c;

                count++;
            }
        }
    }

    if (count == 0) cout << "Not Exist";
    else if (count == 1) printf("(%d, %d): %d", y + 1, x + 1, color);
    else cout << "Not Unique";
    return 0;
}