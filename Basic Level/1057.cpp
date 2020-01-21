//
// Created by oldzhg on 2020-01-21.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str1;
    getline(cin, str1);
    int sum = 0;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i] <= 90 && str1[i] >= 65) sum += str1[i] - 64;
    }

    int c0 = 0, c1 = 0;

    while (sum > 0) {
        if (sum % 2 == 1) c1++;
        else c0++;
        sum = sum / 2;
    }

    cout << c0 << " " << c1;
    return 0;
}