//
// Created by oldzhg on 2019-12-18.
//
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string name, birth, maxname, minname, maxbirth = "1814/09/06", minbirth = "2014/09/06";
    for (int i = 0; i < n; ++i) {
        cin >> name >> birth;
        if ("1814/09/06" <= birth && birth <= "2014/09/06") {
            count++;
            if (birth >= maxbirth) {
                maxname = name;
                maxbirth = birth;
            }
            if (birth <= minbirth) {
                minname = name;
                minbirth = birth;
            }
        }
    }
    cout << count;
    if (count != 0) cout << " " << minname << " " << maxname;

    return 0;
}