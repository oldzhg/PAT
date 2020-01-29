//
// Created by oldzhg on 2020-01-28.
//
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n1, n2, m1, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if (n1 * m2 > n2 * m1) {
        swap(n1, n2);
        swap(m1, m2);
    }
    int num = 1;
    bool flag = false;
    while (n1 * k >= num * m1) num++;
    while (n1 * k < m1 * num && m2 * num < n2 * k) {
        if (gcd(num, k) == 1) {
            printf("%s%d/%d", flag ? " " : "", num, k);
            flag = true;
        }
        num++;
    }
    return 0;
}
