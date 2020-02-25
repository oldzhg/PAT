#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    vector<int> v;
    for (int i = 2; i >= 0; --i) {
        t = static_cast<int>(pow(10, i));
        v.push_back(n / t);
        n = n % t;
    }
    for (int j = 0; j < v[0]; ++j) {
        cout << "B";
    }
    for (int k = 0; k < v[1]; ++k) {
        cout << "S";
    }
    if (v[2] != 0)
        for (int l = 1; l <= v[2]; ++l) {
            cout << l;
        }
}