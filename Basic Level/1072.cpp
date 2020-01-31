
//
// Created by oldzhg on 2020-01-31.
//
#include <iostream>

using namespace std;

int main() {
    int N, M, temp_No, cnt;
    int cnt_Stu = 0, cnt_Ban = 0;
    string name;
    cin >> N >> M;
    int ban[M];
    for (int i = 0; i < M; ++i) {
        scanf("%d", &ban[i]);
    }
    for (int j = 0; j < N; ++j) {
        cin >> name >> cnt;
        bool flag = false;
        for (int i = 0; i < cnt; ++i) {
            cin >> temp_No;
            for (int k = 0; k < M; ++k) {
                if (temp_No == ban[k]) {
                    if (!flag) {
                        cout << name << ":";
                        flag = true;
                    }
                    cnt_Ban++;
                    printf(" %04d", temp_No);
                }
            }
        }
        if (flag) {
            cnt_Stu++;
            cout << endl;
        }
    }
    cout << cnt_Stu << " " << cnt_Ban;
    return 0;
}