//
// Created by oldzhg on 2020-01-31.
//
#include <iostream>
#include <map>

using namespace std;

int main() {
    int M, N, S;
    string str;
    cin >> M >> N >> S;
    map<string, int> person; //存储当前用户有没有已经中奖过
    bool flag = false;
    for (int i = 1; i <= M; ++i) {
        cin >> str;
        if (person[str] == 1) S += 1;
        if (i == S && person[str] == 0) {
            person[str] = 1;
            cout << str << endl;
            flag = true;
            S = S + N;
        }
    }
    if (!flag) cout << "Keep going...";
    return 0;
}
