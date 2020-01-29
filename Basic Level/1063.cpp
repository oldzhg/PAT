//
// Created by oldzhg on 2020-01-29.
//
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double max = 0.000;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        double a, b;
        scanf("%lf %lf", &a, &b);
        if (sqrt(a * a + b * b) >= max) max = sqrt(a * a + b * b);
    }
    printf("%.2lf", max);
    return 0;
}
