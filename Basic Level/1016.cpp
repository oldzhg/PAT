#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, c, pa, pb;
    char b, d;
    int cnt1 = 0, cnt2 = 0;
    cin >> a >> b >> c >> d;
    for (char i : a) {
        if (i == b) cnt1++;
    }
    for (char i : c) {
        if (i == d) cnt2++;
    }
    if (cnt1 == 0) pa = "0";
    else {
        while (cnt1 > 0) {
            pa += b;
            cnt1--;
        }
    }
    if (cnt2 == 0) pb = "0";
    else {
        while (cnt2 > 0) {
            pb += d;
            cnt2--;
        }
    }
    cout << stoi(pa) + stoi(pb);

}