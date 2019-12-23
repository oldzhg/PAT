//
// Created by oldzhg on 2019-12-23.
//
#include <iostream>

using namespace std;

int main() {
    int N, D;
    double e;
    double maybe = 0, sure = 0;
    cin >> N >> e >> D;
    for (int i = 0; i < N; ++i) {
        int time, count = 0;
        double temp;
        cin >> time;
        for (int j = 0; j < time; ++j) {
            cin >> temp;
            if (temp < e) count++;
        }
        if (count > (time / 2)) time > D ? sure++ : maybe++;
    }
    printf("%.1f%% %.1f%%", maybe * 100 / N, sure * 100 / N);
    return 0;
}
