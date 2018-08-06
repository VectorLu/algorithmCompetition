#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    string a, b;
    while (cin >> a >> b) {
        int lenA = a.length();

        int cnt1[26], cnt2[26];
        for (int i = 0; i < 26; i++) {
            cnt1[i] = 0;
            cnt2[i] = 0;
        }

        // 获取每个字母出现的次数
        for (int i = 0; i < lenA; i++) {
            cnt1[a[i]-'A']++;
            cnt2[b[i]-'A']++;
        }
        sort(cnt1, cnt1+26);
        sort(cnt2, cnt2+26);

        // 如果有一个不相等，就跳出循环
        bool flag = true;
        for (int i = 0; i < 26; i++) {
            if (cnt1[i] != cnt2[i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
