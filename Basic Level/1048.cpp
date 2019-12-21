//
// Created by oldzhg on 2019-12-21.
//
#include <iostream>

using namespace std;

int main() {

    string A, B, s = "";

    string t = "0123456789JQK";

    cin >> A >> B;

    int lenA = A.size(), lenB = B.size();
    if (lenA < lenB) {
        for (int i = 0; i < lenB - lenA; ++i) A = '0' + A;
    } else {
        for (int i = 0; i < lenA - lenB; ++i) B = '0' + B;
    }

    for (int j = A.size() - 1; j >= 0; j--) {
        int i = A.size() - j;
        if (i % 2 == 0) {
            s = t[((B[j] - '0') - (A[j] - '0') + 10) % 10] + s;
        } else {
            s = t[((A[j] - '0') + (B[j] - '0')) % 13] + s;
        }
    }
    cout << s;
    return 0;
}
