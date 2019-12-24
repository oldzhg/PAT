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
//    reverse(a.begin(), a.end());

    int result[m][n];
    memset(result, 0, sizeof(result));

    unsigned long cnt = a.size();


    int x = 0, y = 0, x_min = 0, y_min = 0, x_max = m - 1, y_max = n - 1;   //x和y为当前的位置。_min和_max为边缘
    int flag = 3;   //方向标志。1->向左，2->向下，3->向右，4->向上
    while (cnt--) {
        result[x][y] = a[cnt];   //添加到容器内
        if ((flag == 3 && y == y_max) || (flag == 3 && result[x][y + 1]))    //右上角
            flag = 2;   //向下
        else if ((flag == 2 && x == x_max) || (flag == 2 && result[x + 1][y])) //右下角
            flag = 1;   //向左
        else if ((flag == 1 && y == y_min) || (flag == 1 && result[x][y - 1])) //左下角
            flag = 4;   //向上
        else if ((flag == 4 && x == x_min) || (flag == 4 && result[x - 1][y])) //左上角
            flag = 3;   //向右
        if (flag == 1) y--;
        if (flag == 2) x++;
        if (flag == 3) y++;
        if (flag == 4) x--;    //这四行代码用来改变坐标(x,y)
    }


    for (int l = 0; l < m; ++l) {
        for (int i = 0; i < n; ++i) {
            printf("%d", result[l][i]);
            if (i != n - 1) printf(" ");
        }
        if (l != m - 1) printf("\n");
    }

    return 0;
}
