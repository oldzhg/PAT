//
// Created by oldzhg on 2020-01-29.
//
#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    string temp;
    set<int> a;
    set<int>::iterator it;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        int sum = 0;
        for (int j = 0; j < temp.size(); ++j) {
            sum += temp[j] - '0';
        }
        a.insert(sum);
    }
    cout << a.size() << endl << *(a.begin());
    for (it = next(a.begin()); it != a.end(); it++)
        cout << " " << (*it);
    return 0;
}
