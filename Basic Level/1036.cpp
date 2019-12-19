//
// Created by oldzhg on 2019-12-19.
//
#include <iostream>

using namespace std;

int main() {
    int N;
    char C;
    cin >> N >> C;
    for (int j = 0; j < N; ++j) {
        cout << C;
    }
    cout << endl;
    for (int i = 2; i < N - 1; ++i) {
        if ((i) % 2 == 0) continue;
        else {
            cout << C;
            for (int j = 0; j < N - 2; ++j) {
                cout << " ";
            }
            cout << C << endl;
        }
    }
    for (int j = 0; j < N; ++j) {
        cout << C;
    }
    return 0;
}
