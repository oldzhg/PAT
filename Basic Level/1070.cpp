//
// Created by oldzhg on 2020-01-31.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> rope(N);
    for (int i = 0; i < N; i++) scanf("%d", &rope[i]);
    sort(rope.begin(), rope.end());
    int result = rope[0];
    for (int j = 1; j < N; ++j) result = (result + rope[j]) / 2;
    cout << result;
    return 0;
}