#include <iostream>

using namespace std;

int main() {
    int B, R = 0, Q = 0;
    string A;
    cin >> A >> B;
    int len = static_cast<int>(A.length());
    R = (A[0] - '0') / B;
    if ((R != 0 && len > 1) || len == 1)
        cout << R;
    Q = (A[0] - '0') % B;
    for (int i = 1; i < len; ++i) {
        int temp = Q * 10 + A[i] - '0';
        R = temp / B;
        cout << R;
        Q = temp % B;
    }
    cout << " " << Q;
    return 0;
}