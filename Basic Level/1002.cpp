#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int sum;
    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for (int i = 0; i < s.length(); ++i) {
        sum += (s[i] - '0');
    }
    string num = to_string(sum);
    for (int j = 0; j < num.length(); ++j) {
        cout << str[num[j] - '0'];
        if (j != num.length() - 1)
            cout << " ";
    }
}
