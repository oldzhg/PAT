#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct node {
    int sno, de, cai;
};

int cmp(struct node a, struct node b) {
    if ((a.de + a.cai) != (b.de + b.cai))
        return (a.de + a.cai) > (b.de + b.cai);
    else if (a.de != b.de)
        return a.de > b.de;
    else
        return a.sno < b.sno;
}

int main() {
    int N, L, H;
    cin >> N >> L >> H;
    vector<node> v[4];
    node temp{};
    int total = N;
    for (int i = 0; i < N; ++i) {
        cin >> temp.sno >> temp.de >> temp.cai;
        if (temp.de < L || temp.cai < L)
            total--;
        else if (temp.de >= H && temp.cai >= H)
            v[0].push_back(temp);
        else if (temp.de >= H && temp.cai < H)
            v[1].push_back(temp);
        else if (temp.de < H && temp.cai < H && temp.de >= temp.cai)
            v[2].push_back(temp);
        else
            v[3].push_back(temp);
    }
    cout << total << endl;
    for (auto &j : v) {
        sort(j.begin(), j.end(), cmp);
        for (int i = 0; i < j.size(); ++i) {
            printf("%d %d %d\n", j[i].sno, j[i].de, j[i].cai);
        }
    }
    return 0;
}