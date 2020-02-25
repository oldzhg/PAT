#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != 'E') i++;
    string t = s.substr(1, i - 1);
    int n = stoi(s.substr(i + 1));
    if (s[0] == '-') cout << "-";
    if (n < 0) {
        cout << "0.";
        for (int i = 0; i < abs(n) - 1; i++) cout << "0";
        for (int i = 0; i < t.length(); i++)
            if (t[i] != '.') cout << t[i];
    } else {
        cout << t[0];
        int cnt, j;
        for (j = 2, cnt = 0; j < t.length() && cnt < n; j++, cnt++) cout << t[j];
        if (j == t.length())
            for (int i = 0; i < n - cnt; i++) cout << '0';
        else {
            cout << '.';
            for (int i = j; i < t.length(); i++) cout << t[i];
        }
    }
    return 0;
}
/*

��������1��
+1.23400E-03
�������1��
0.00123400
��������2��
-1.2E+10
�������2��
-12000000000

������n����E������ַ�������Ӧ�����֣�t����Eǰ����ַ���������������λ����n<0ʱ��ʾ��ǰ�ƶ�����ô�����0.
Ȼ�����abs(n)-1��0��Ȼ��������t�е��������֣���n>0ʱ���ʾ����ƶ�����ô�������һ���ַ���
Ȼ��t�о��������n���ַ������t�Ѿ���������һ���ַ�(j == t.length())��ô���ں��油n-cnt��0��
����Ͳ���һ��С����. Ȼ��������tʣ���û��������ַ���

*/