#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> v;
    vector<int> b(static_cast<unsigned long>(N));
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    for (int j = 0; j < v.size(); ++j) {
        b[(j + M) % N] = v[j];
    }
    for (int k = 0; k < b.size(); ++k) {
        cout << b[k];
        if (k != b.size() - 1) cout << " ";
    }
    return 0;
}