//
// Created by oldzhg on 2020-01-31.
//
#include <iostream>

using namespace std;

int main() {
    string s, temp;
    int N, count = 0;
    cin >> s >> N;
    getchar();
    while (1) {
        getline(cin, temp);
        if (temp == "#") break;
        if (temp == s) {
            printf("Welcome in");
            break;
        } else {
            cout << "Wrong password: " << temp << endl;
        }
        if (count == N - 1) {
            cout << "Account locked";
            break;
        }
        count++;
    }
    return 0;
}
