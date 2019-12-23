//
// Created by oldzhg on 2019-12-23.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double R1, P1, R2, P2, A, B;
    cin >> R1 >> P1 >> R2 >> P2;
    A = (cos(P1) * cos(P2) - sin(P1) * sin(P2)) * R1 * R2;
    B = (sin(P1) * cos(P2) + cos(P1) * sin(P2)) * R1 * R2;
    if (fabs(A) < 0.01) A = 0.00;
    if (fabs(B) < 0.01) B = 0.00;
    if (B < 0) printf("%.2lf-%.2lfi", A, fabs(B));
    else printf("%.2lf+%.2lfi", A, B);
    return 0;
}
