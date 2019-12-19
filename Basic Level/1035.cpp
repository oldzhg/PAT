//
// Created by oldzhg on 2019-12-19.
//
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 111;
int origin[N], backup[N], target[N];
int n;

bool isSame (int A[], int B[]) {
    for (int i = 0; i < n; ++i) {
        if (A[i] != B[i]) return false;
    }
    return true;
}

void show(int A[]) {
    for (int i = 0; i < n; ++i) {
        cout << A[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
}

bool insertsort() {
    bool flag = false;
    for (int i = 1; i < n; ++i) {
        if (i != 1 && isSame(backup, target)) flag = true;
        int temp = backup[i], j = i;
        while (j > 0 && temp < backup[j-1]) {
            backup[j] = backup[j - 1];
            j--;
        }
        backup[j] = temp;
        if (flag == true) {
            return true;
        }
    }
    return false;
}

void mergesort() {
    bool flag = false;
    for (int step = 2; step / 2 <= n ; step *= 2) {
        if (step != 2 && isSame(backup, target)) flag = true;
        for (int i = 0; i < n; i += step) {
            sort(backup + i, backup + min(i + step, n));
        }
        if (flag) {
            show(backup);
            return;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> origin[i];
        backup[i] = origin[i];
    }
    for (int j = 0; j < n; ++j) {
        cin >> target[j];
    }
    if (insertsort()) {
        cout << "Insertion Sort" << endl;
        show(backup);
    } else {
        cout << "Merge Sort" << endl;
        for (int i = 0; i < n; ++i) {
            backup[i] = origin[i];
        }
        mergesort();
    }
    return 0;
}
