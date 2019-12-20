//
// Created by oldzhg on 2019-12-20.
//
#include <iostream>

using namespace std;

int main() {
    string pta;
    cin >> pta;
    int result = 0, countt = 0, countp = 0;
    for (int i = 0; i < pta.length(); ++i) {
        if (pta[i] == 'T') countt++;
    }
    for (int j = 0; j < pta.length(); ++j) {
        if (pta[j] == 'P') countp++;
        if (pta[j] == 'T') countt--;
        if (pta[j] == 'A') result = (result + (countp * countt) % 1000000007) % 1000000007;
    }
    cout << result;
    return 0;
}
