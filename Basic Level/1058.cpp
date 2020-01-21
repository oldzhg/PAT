//
// Created by oldzhg on 2020-01-21.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int stu, question;
    cin >> stu >> question;
    vector<vector<char>> rightOptions(question);
    vector<int> fullScore(question), wrongCnt(question);
    for (int i = 0; i < question; ++i) {
        int nOptions, nRightOption;

        scanf("%d %d %d", &fullScore[i], &nOptions, &nRightOption);
        for (int j = 0; j < nRightOption; ++j) {
            char tempAnswer;
            scanf(" %c", &tempAnswer);
            rightOptions[i].push_back(tempAnswer);
        }
    }
    for (int k = 0; k < stu; ++k) {
        int score = 0, num;
        scanf("\n");
        for (int i = 0; i < question; ++i) {
            if (i != 0) scanf(" ");
            scanf("(%d", &num);
            vector<char> stuOptions(num);

            for (int j = 0; j < num; ++j) {
                char c;
                scanf(" %c", &c);
                stuOptions[j] = c;
            }
            scanf(")");
            if (stuOptions == rightOptions[i]) score += fullScore[i];
            else wrongCnt[i]++;
        }
        printf("%d\n", score);
    }

    int maxCount = 0;
    for (int l = 0; l < question; ++l) {
        if (wrongCnt[l] > maxCount) maxCount = wrongCnt[l];
    }

    if (maxCount == 0) printf("Too simple");
    else {
        printf("%d", maxCount);
        for (int i = 0; i < question; ++i) {
            if (wrongCnt[i] == maxCount) printf(" %d", i + 1);
        }
    }

    return 0;
}
