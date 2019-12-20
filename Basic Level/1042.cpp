//
// Created by oldzhg on 2019-12-20.
//
#include <iostream>

using namespace std;

int main() {
    int ascii[128] = {0};
    string s;
    getline(cin, s);
    for (char i : s) {
        if (isalpha(i)) ascii[i]++;
    }
    for (int j = 65; j < 91; ++j) {
        ascii[j + 32] += ascii[j];
        ascii[j] = 0;
    }
    int c = 0;
    int max = 0;
    for (int k = 0; k < 128; ++k) {
        if (ascii[k] > max) {
            c = k;
            max = ascii[k];
        }
    }
    cout << char(c) << " " << max;
    return 0;
}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int ascii[26] = { 0 };
//    string s;
//    getline(cin, s);
//    transform(s.begin(), s.end(), s.begin(), ::tolower);
//    for (char i : s) {
//        if (islower(i)) ascii[i - 'a'] ++ ;
//    }
//    int max = ascii[0], t = 0;
//    for (int j = 0; j < 26; ++j) {
//        if (ascii[j] > max) {
//            max = ascii[j];
//            t = j;
//        }
//    }
//    cout << char(t + 'a')<< " " << max;
//    return 0;
//}
