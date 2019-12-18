//
// Created by oldzhg on 2019-12-18.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2, str = "";
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    int j = 0;
    for (int unsigned i = 0; i < str1.length(); ++i) {
        if (str1[i] == str2[j]) {
            j += 1;
            continue;
        }
        else {
            if (str.find(str1[i]) <= str.length()) {
                continue;
            }
            else {
                str = str + str1[i];
                continue;
            }
        }
    }
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str;
    return 0;
}