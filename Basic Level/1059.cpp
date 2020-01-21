//
// Created by oldzhg on 2020-01-21.
//
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool isprime(int a) {
    if (a <= 1) return false;
    int Sqrt = sqrt((double) a);
    for (int i = 2; i <= Sqrt; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N, K;
    cin >> N;
    vector<int> id(N);
    vector<int> check;
    for (int i = 0; i < N; ++i) {
        scanf("%d", &id[i]);
    }
    cin >> K;
    for (int j = 0; j < K; ++j) {
        int temp;
        cin >> temp;
        printf("%04d: ", temp);
        vector<int>::iterator iter = std::find(id.begin(), id.end(), temp);
        vector<int>::iterator checking = std::find(check.begin(), check.end(), temp);

        if (iter == id.end()) {
            cout << "Are you kidding?" << endl;
            continue;
        }
        if (checking == check.end()) {
            check.push_back(temp);
        } else {
            cout << "Checked" << endl;
            continue;
        }
        if (*iter == id[0]) {
            cout << "Mystery Award" << endl;
            continue;
        }
        for (int i = 1; i < N; ++i) {
            if (*iter == id[i] && isprime(i + 1))
                cout << "Minion" << endl;
            else if (*iter == id[i])
                cout << "Chocolate" << endl;
        }
    }
    return 0;
}
