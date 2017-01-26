#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int maxn = 1000000 + 10;
long long A[maxn], C[maxn], tot, M;

int main(int argc, char const *argv[]) {
    int n = 0;
    while(scanf("%d", &n) == 1) { // 输入数据大，scanf 比 cin 快
        tot = 0;
        for (int i = 1; i <= n; i++) {
            /* 用 %lld 输入 long long */
            scanf("%lld", &A[i]);
            tot += A[i];
        }
        M = tot / n;
        C[0] = 0;
        for (int i = 1; i < n; i++) {
            // 递推 C 数组
            C[i] = C[i-1] + A[i] - M;
        }
        sort(C, C+n);
        long long x1 = C[n/2], ans = 0; // 计算 x1
        for (int i = 0; i < n; i++) {
            ans += abs(x1 - C[i]);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
