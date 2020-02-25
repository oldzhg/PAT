#include <utility>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool cmp(int a, int b) { return a > b; }

int main() {
    int a, d;
    cin >> a;

    vector<int> list;

    for (int i = 0; i < a; ++i) {
        cin >> d;
        list.push_back(d);
    }

    vector<int> list2;

    for (auto val : list) {
        while (val != 1) {
            if (val % 2 == 0) {
                val = val / 2;
                list2.push_back(val);

            } else {
                val = (3 * val + 1) / 2;
                list2.push_back(val);
            }
        }
    }

    sort(list.begin(), list.end(), cmp);
    vector<int> l;

    for (auto val : list) {
        auto find1 = find(list2.begin(), list2.end(), val);
        if (find1 == list2.end())
            l.push_back(val);
    }

    for (int j = 0; j < l.size(); ++j) {
        cout << l[j];
        if (j != l.size() - 1)
            cout << " ";
    }

}