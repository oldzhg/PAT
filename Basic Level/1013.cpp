#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}

int main() {
    int M, N, num = 2, cnt = 0;
    cin >> M >> N;
    vector<int> v;
    while (cnt < N) {
        if (isprime(num)) {
            cnt++;
            if (cnt >= M) v.push_back(num);
        }
        num++;
    }
    cnt = 0;
    for (auto val : v) {
        cnt++;
        if (cnt % 10 != 1) cout << " ";
        cout << val;
        if (cnt % 10 == 0) cout << endl;
    }

    return 0;
}