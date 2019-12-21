#include <iostream>
#include <string>

using namespace std;

string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"}; // 低位 
string high[13] = {"#", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"}; // 高位 

void convertToMars(int t) {
    if (t / 13) {
        cout << high[t / 13];
        if (t % 13 != 0) {
            cout << " " << low[t % 13] << endl;
        } else {
            cout << endl;
        }
    } else {
        cout << low[t % 13] << endl;
    }
}

void marsConvertTo(string s) {
    int t1 = 0, t2 = 0;
    string s1 = s.substr(0, 3), s2;
    if (s.length() > 4) s2 = s.substr(4, 3);
    for (int i = 0; i < 13; ++i) {
        if (s1 == low[i] || s2 == low[i]) t2 = i;
        if (s1 == high[i]) t1 = i;
    }
    cout << t1 * 13 + t2 << endl;
}

int main() {
    int N;
    cin >> N;
    getchar();
    string s;
    for (int i = 0; i < N; ++i) {
        getline(cin, s);
        if (s[0] >= '0' && s[0] <= '9') convertToMars(stoi(s));
        else marsConvertTo(s);
    }
    return 0;
}