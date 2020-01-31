//
// Created by oldzhg on 2020-01-31.
//
#include <iostream>

using namespace std;

int main() {
    int T, K, n1, b, t, n2;
    cin >> T >> K;
    for (int i = 0; i < K; ++i) {
        cin >> n1 >> b >> t >> n2;
        if (t > T) {
            printf("Not enough tokens.  Total = %d.\n", T);
            continue;
        }
        if ((n1 > n2 && b == 0) || (n1 < n2 && b == 1)) {
            T += t;
            printf("Win %d!  Total = %d.\n", t, T);
        } else {
            T -= t;
            printf("Lose %d.  Total = %d.\n", t, T);
        }
        if (T == 0) {
            printf("Game Over.");
            break;
        }
    }
    return 0;
}
