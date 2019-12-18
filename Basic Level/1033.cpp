//
// Created by oldzhg on 2019-12-18.
//
#include <iostream>
using namespace std;

int main() {
    string bad, expect;
    getline(cin, bad);
    getline(cin, expect);
    for (char i : expect) {
        if (bad.find(static_cast<char>(toupper(i))) != string::npos) continue;
        if (isupper(i) && bad.find('+') != string::npos) continue;
        cout << i;
    }
    return 0;
}
