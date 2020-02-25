#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    int A, B, D;
    cin >> A >> B >> D;
    int t = A + B;
    if (t == 0) {
        cout << 0;
        return 0;
    }
    vector<int> a;
    while (t != 0) {
        a.push_back(t % D);
        t /= D;
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
    }
}