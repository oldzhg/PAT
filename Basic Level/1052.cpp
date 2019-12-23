//
// Created by oldzhg on 2019-12-23.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> hand;
    vector<string> eye;
    vector<string> mouth;

    for (int i = 0; i < 3; ++i) {
        string str;
        getline(cin, str);
        vector<string> temp;
        unsigned int j = 0, k = 0;
        while (j < str.size()) {
            if (str[j] == '[') {
                string tempStr = "";
                k = j + 1;
                while (str[k] != ']') {
                    tempStr += str[k];
                    k++;
                }
                temp.push_back(tempStr);
            }
//            if (str[j] == '[') {
//                while (k++ < str.size()) {
//                    if (str[k] == ']') {
//                        temp.push_back(str.substr(j+1, k-j-1));
//                        break;
//                    }
//                }
//            }
            j++;
        }
        if (i == 0) hand = temp;
        else if (i == 1) eye = temp;
        else if (i == 2) mouth = temp;
    }

    //        ╮ ╭ o ~\ /~ < >
    //        ╯ ╰ ^ - = > < @ ⊙
    //        Д ▽ _ ε ^

    //        ╮ ╭ o ~\ /~ < >
    //        ╯ ╰ ^ - = > < @ ⊙
    //        Д ▽ _ ε ^

    unsigned int N;
    cin >> N;
    for (unsigned int l = 0; l < N; ++l) {
        unsigned int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a > hand.size() || b > eye.size() || c > mouth.size() || d > eye.size() || e > hand.size() ||
            (a + b + c + d + e) < 5) {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        cout << hand[a - 1] << "(" << eye[b - 1] << mouth[c - 1] << eye[d - 1] << ")" << hand[e - 1] << endl;
    }
    return 0;
}
