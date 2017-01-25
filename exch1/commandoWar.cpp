#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    int j, b;
    bool operator < (const Job& x) const {
        return j > x.j;
    }
};

int main(int argc, char const *argv[]) {
    int n, b, j, kase = 1;
    while (scanf("%d", &n) == 1 && n) {
        vector<Job> v;
        for (int i = 0; i < n; i++) {
            scanf("%d%d", &b, &j);
            v.push_back((Job){j, b});
        }
        // 使用 Job 类自己的 < 运算符排序
        sort(v.begin(), v.end());
        int s = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            // 当前任务的开始执行时间
            s += v[i].b;
        }
    }
    return 0;
}
