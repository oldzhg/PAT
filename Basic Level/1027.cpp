//
// Created by oldzhg on 2019-12-18.
//
#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    char c;
    cin >> a >> c;
    for (int i = 0; i < a; i++) {
        if(( 2 * i * (i + 2)) + 1 > a)
        {
            b = i - 1;
            break;
        }
    }
    for (int j = b; j > 0; j--) {
        for (int i = b - j; i > 0; i--) {
            cout << " ";
        }
        for (int k = 0; k < (2 * j + 1); ++k) {
                cout << c;
        }
        cout << endl;
    }
    for (int l = 0; l < b; ++l) {
        cout << " ";
    }
    cout << c << endl;
    for (int m = 1; m <= b; ++m) {
        for (int i = b - m;  i > 0; i--) {
            cout << " ";
        }
        for (int j = 0; j < (2 * m + 1); ++j) {
            cout << c;
        }
        cout << endl;
    }
    cout << a - 2 * b * (b + 2) - 1;
    return 0;
}
