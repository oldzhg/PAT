//
// Created by oldzhg on 2019-12-19.
//
#include <iostream>

using namespace std;

int main() {
    int hashTable[128] = {0};
    string str1, str2;
    cin >> str1 >> str2;
    for (char i : str1) {
        hashTable[i]++;
    }
    int less = 0;
    for (char j : str2) {
        if (hashTable[j] > 0) hashTable[j]--;
        else less++;
    }
    if (less != 0) cout << "No " << less;
    else cout << "Yes " << str1.length() - str2.length();
    return 0;
}
