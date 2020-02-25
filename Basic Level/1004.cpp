#include <utility>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class student {
public:
    string name;
    string sno;
    int grade;

    student(const string &name, const string &sno, int grade);

    void take_in(string a, string b, int c);

    void show();
};

void student::take_in(string a, string b, int c) {
    name = std::move(a);
    sno = std::move(b);
    grade = c;
}

void student::show() {
    cout << name << " " << sno << endl;
}

student::student(const string &name, const string &sno, int grade) : name(name), sno(sno), grade(grade) {}


bool cmp(student st1, student st2) {
    return st1.grade > st2.grade;
}

int main() {
    int n;
    string name;
    string sno;
    int grade;
    cin >> n;
    vector<student> stu;

    for (int i = 0; i < n; ++i) {
        cin >> name;
        cin >> sno;
        cin >> grade;
        auto *st = new student(name, sno, grade);
        stu.push_back(*st);
    }
    sort(stu.begin(), stu.end(), cmp);
    stu.front().show();
    stu.back().show();
}