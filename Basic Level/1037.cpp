//
// Created by oldzhg on 2019-12-19.
//
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f, x, y, z;
    scanf("%d.%d.%d %d.%d.%d", &a, &b, &c, &d, &e, &f);
    if (a * 17 * 29 + b * 29 + c > d * 17 * 29 + e * 29 + f) {
        swap(a, d);
        swap(b, e);
        swap(c, f);
        cout << "-";
    }
    if (f >= c) z = f - c;
    else {
        e -= 1;
        z = f + 29 - c;
    }
    if (e >= b) y = e - b;
    else {
        d -= 1;
        y = e + 17 - b;
    }
    x = d - a;
    cout << x << "." << y << "." << z;
    return 0;
}
