#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
struct mooncake {
    float mount, price, unit;
};

int cmp(mooncake a, mooncake b) {
    return a.unit > b.unit;
}

int main() {
    int N, D;
    cin >> N >> D;
    vector<mooncake> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i].mount;
    }
    for (int i = 0; i < N; i++) {
        cin >> a[i].price;
    }
    for (int i = 0; i < N; i++) {
        a[i].unit = a[i].price / a[i].mount;
    }
    sort(a.begin(), a.end(), cmp);
    float result = 0.0;
    for (int i = 0; i < N; i++) {
        if (a[i].mount <= D) {
            result = result + a[i].price;
        } else {
            result = result + a[i].unit * D;
            break;
        }
        D = D - a[i].mount;
    }
    printf("%.2f", result);
    return 0;
}