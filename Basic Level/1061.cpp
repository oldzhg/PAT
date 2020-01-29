//
// Created by oldzhg on 2020-01-28.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int person, number;
    cin >> person >> number;
    vector<int> score(number), answer(number);
    for (int i = 0; i < number; ++i) {
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < number; ++i) {
        scanf("%d", &answer[i]);
    }
    for (int j = 0; j < person; ++j) {
        int sum = 0;
        for (int i = 0; i < number; ++i) {
            int temp;
            cin >> temp;
            if (temp == answer[i]) sum += score[i];
        }
        cout << sum << endl;
    }
    return 0;
}
