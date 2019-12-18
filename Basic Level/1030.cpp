//
// Created by oldzhg on 2019-12-18.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, result = 0, temp = 0;
    long long p;
    cin >> N >> p;
    int a[N];
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    sort(a,a+N);
    for (int j = 0; j < N; ++j) {
        for (int i = j + result; i < N; ++i) {
            if (a[j] * p >= a[i]) {
                temp = i - j + 1;
                if (temp > result) result = temp;
            } else break;
        }
    }
    cout << result;
    return 0;
}

