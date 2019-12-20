//
// Created by oldzhg on 2019-12-20.
//
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int countP = 0, countA = 0, countT = 0, counte = 0, counts = 0, countt = 0;
    for (char i : s) {
        if (i == 'P') countP++;
        if (i == 'A') countA++;
        if (i == 'T') countT++;
        if (i == 'e') counte++;
        if (i == 's') counts++;
        if (i == 't') countt++;
    }
    int sum = countP + countA + countT + counte + counts + countt;
    while (sum != 0) {
        if (countP != 0) {
            cout << 'P';
            countP--;
        }
        if (countA != 0) {
            cout << 'A';
            countA--;
        }
        if (countT != 0) {
            cout << 'T';
            countT--;
        }
        if (counte != 0) {
            cout << 'e';
            counte--;
        }
        if (counts != 0) {
            cout << 's';
            counts--;
        }
        if (countt != 0) {
            cout << 't';
            countt--;
        }
        sum = countP + countA + countT + counte + counts + countt;
    }
    return 0;
}
