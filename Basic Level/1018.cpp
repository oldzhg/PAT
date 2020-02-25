#include <iostream>

using namespace std;

int cnt1[3] = {0}, cnt2[3] = {0};
int win1 = 0, win2 = 0;

void game(char a, char b) {
    if (a == 'C' && b == 'J') {
        win1++;
        cnt1[1]++;
    }
    if (a == 'C' && b == 'B') {
        win2++;
        cnt2[0]++;
    }
    if (a == 'J' && b == 'C') {
        win2++;
        cnt2[1]++;
    }
    if (a == 'J' && b == 'B') {
        win1++;
        cnt1[2]++;
    }
    if (a == 'B' && b == 'C') {
        win1++;
        cnt1[0]++;
    }
    if (a == 'B' && b == 'J') {
        win2++;
        cnt2[2]++;
    }
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        char a, b;
        cin >> a >> b;
        game(a, b);
    }
    cout << win1 << " " << N - win1 - win2 << " " << win2 << endl;
    cout << win2 << " " << N - win1 - win2 << " " << win1 << endl;

    int maxjia = cnt1[0] >= cnt1[1] ? 0 : 1;
    maxjia = cnt1[maxjia] >= cnt1[2] ? maxjia : 2;
    int maxyi = cnt2[0] >= cnt2[1] ? 0 : 1;
    maxyi = cnt2[maxyi] >= cnt2[2] ? maxyi : 2;
    string str = "BCJ";
    cout << str[maxjia] << " " << str[maxyi];
    return 0;
}