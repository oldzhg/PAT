#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    s.insert(0, 4 - s.length(), '0');
    do {
        string a = s;
        sort(a.begin(), a.end());
        string b = a;
        reverse(b.begin(), b.end());
        s = to_string(stoi(b) - stoi(a));
        s.insert(0, 4 - s.length(), '0');
        cout << b << " - " << a << " = " << s << endl;;
    } while (s != "6174" && s != "0000");
    return 0;
}

/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    s.insert(0, 4 - s.length(), '0');
    do {
        vector<char> v;
        for (int i = 0; i < 4; ++i) v.push_back(s[i]);
        string temp[2] = {""};
        sort(v.begin(), v.end());
        temp[0] = temp[0] + v[0] + v[1] + v[2] + v[3];
        reverse(v.begin(),v.end());
        temp[1] = temp[1] + v[0] + v[1] + v[2] + v[3];
        s = to_string(stoi(temp[1]) - stoi(temp[0]));
        s.insert(0, 4 - s.length(), '0');
        cout << temp[1] << " - " << temp[0] << " = " << s << endl;;
    } while (s != "6174" && s != "0000");
    return 0;
}
 */