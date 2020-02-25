#include <iostream>

using namespace std;

int main() {
    int a, b;
    int count = 0;
    cin >> a;
    while (a != 1) {
        if (a % 2 == 0) {
            a = a / 2;
            count++;
        } else {
            a = (3 * a + 1) / 2;
            count++;
        }
        b = count;
    }
    cout << b << endl;
}
