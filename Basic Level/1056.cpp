//
// Created by oldzhg on 2020-01-13.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, sum = 0;
    cin >> N;
    vector<int> a(N);

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
//        最优解
//        sum += a[i] * 10 * (N - 1) + a[i] * (N - 1);
    }

    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) {
            if (i != j) sum += a[j] * 10 + a[i];
        }
    }

    cout << sum;

    return 0;
}