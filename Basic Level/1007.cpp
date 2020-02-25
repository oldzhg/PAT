#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> v;
    v.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) v.push_back(i);
    }
    for (int k = 0; k < v.size() - 1; ++k) {
        if (v[k + 1] - v[k] == 2) count++;
    }
    cout << count;

    return 0;
}