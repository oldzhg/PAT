#include <iostream>

using namespace std;
#define CLK 100;

int main() {
    int c1, c2;
    cin >> c1 >> c2;
    int t = (c2 - c1 + 50) / CLK;
    int hour = t / 3600;
    t = t % 3600;
    int minute = t / 60, second = t % 60;
    printf("%02d:%02d:%02d", hour, minute, second);
    return 0;
}