//
// Created by oldzhg on 2019-12-23.
//
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    double temp, sum = 0;
    for (int i = 1; i <= N; ++i) {
        scanf("%lf", &temp);
        sum += temp * i * (N - i + 1);
    }
    printf("%.2f", sum);
    return 0;
}
