//
// Created by oldzhg on 2019-12-18.
//
#include <iostream>

using namespace std;

typedef long long ll;

ll a, b, c, d;

ll gcd(ll t1, ll t2) {
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

void func(ll m, ll n) {
    if (m * n == 0) {
        printf("%s", n == 0 ? "Inf" : "0");
        return;
    }
    bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));
    m = abs(m);
    n = abs(n);
    ll x = m / n;
    printf("%s", flag ? "(-" : "");
    if (x != 0) printf("%lld", x);
    if (m % n == 0) {
        if (flag) printf(")");
        return;
    }
    if (x != 0) printf(" ");
    m = m - x * n;
    ll t = gcd(m, n);
    m = m / t;
    n = n / t;
    printf("%lld/%lld%s", m, n, flag ? ")" : "");
}
int main() {
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + b * c, b * d); printf("\n");
    func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
    func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
    func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c); printf("\n");
    return 0;
}
