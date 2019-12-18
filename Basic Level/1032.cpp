//
// Created by oldzhg on 2019-12-18.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    unsigned int N;
    cin >> N;
    vector<int> a(N + 1);
    for (int i = 0; i < N; ++i) {
        int num, score;
        cin >> num >> score;
        a[num] += score;
    }
    auto biggest = max_element(begin(a), end(a));
    cout << distance(begin(a), biggest) << " " << *biggest;
    return 0;
}
