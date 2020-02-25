#include <iostream>
#include <map>

using namespace std;

int main() {
    int p, t, n;
    cin >> n; //字符串数量
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        map<char, int> m;

        for (int j = 0; j < s.length(); ++j) {
            m[s[j]]++;
            if (s[j] == 'P')
                p = j;
            if (s[j] == 'T')
                t = j;
        }
        if (m['P'] == 1 && m['T'] == 1 && t > p && p * (t - p - 1) == s.length() - t - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}