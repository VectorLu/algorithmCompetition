#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 10000;
int a[maxn];

int main(int argc, char const *argv[]) {
    int n, q, x, kase = 0;

    while (scanf("%d%d", &n, &q)==2 && n) {
        printf("CASE#%d:\n", ++kase);
        for (int i=0; i < n; ++i) {scanf("%d", &a[i]);}
        sort(a, a+n);
        while (q--) {
            scanf("%d", &x);
            // 在已排序的数组中找 x
            int p = lower_bound(a, a+n, x) - a;
            if (a[p] == x) {printf("%d found at %d\n", x, p);}
            else {printf("%d not found\n", x);}
        }
    }
    return 0;
}
