//
// Created by oldzhg on 2020-01-31.
//
#include <iostream>

using namespace std;

int main() {
    int M, N, min, max, rep, temp;
    scanf("%d %d %d %d %d", &M, &N, &min, &max, &rep);
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &temp);
            if (min <= temp && temp <= max) temp = rep;
            if (j != N - 1) printf("%03d ", temp);
            else printf("%03d", temp);
        }
        if (i != M - 1) printf("\n");
    }
    return 0;
}