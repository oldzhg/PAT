//
// Created by oldzhg on 2019-12-21.
//
#include <iostream>

using namespace std;

int main() {
    int n, t, num, score, max = 0;
    cin >> n;
    int team[1001] = {0};
    for (int i = 0; i < n; ++i) {
        scanf("%d-%d %d", &t, &num, &score);
        team[t] += score;
    }
    for (int j = 0; j < 1001; ++j) {
        if (team[max] < team[j]) max = j;
    }
    cout << max << " " << team[max];
    return 0;
}

//int main() {
//    int N;
//    int person[1001][11] = { 0 };
//    int teamId, pid, score;
//    cin >> N;
//    for (int i = 0; i < N; ++i) {
//        scanf("%d-%d %d", &teamId, &pid, &score);
//        person[teamId][pid] = score;
//    }
//    int tid = 0, maxScore = 0;
//    for (int j = 0; j < 1001; ++j) {
//        int scoreSum = 0;
//        for (int i = 0; i <= 10; ++i) {
//            scoreSum += person[j][i];
//        }
//        if (scoreSum > maxScore) {
//            maxScore = scoreSum;
//            tid = j;
//        }
//    }
//    cout << tid << " " << maxScore;
//    return 0;
//}