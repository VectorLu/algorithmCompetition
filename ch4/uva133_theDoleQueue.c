#include <stdio.h>
#define maxn 25
int n, k, m, a[maxn];

// 逆时针走 t 步
// 步长是 d，其为 -1 时顺时针，为 1 时逆时针，返回新位置
int go(int p, int d, int t) {
  while (t--) {
    // p = (p+d)%n;
    do {p = (p+d+n-1)%n + 1;}
    while (a[p] == 0);
  }
  return p;
}

int main() {
  while (scanf("%d%d%d", &n, &k, &m) == 3) {
    for (int i = 1; i <= n; i++) {a[i] = i;}
    int left = n;
    int p1 = n, p2 = 1;
    while (left) {
      p1 = go(p1, 1, k);
      p2 = go(p2, -1, m);
      printf("%3d", p1);
      left--;
      if (p2 != p1) {printf("%3d", p2); left--;}
      a[p1] = a[p2] = 0;
      if (left) {printf(", ");}
    }
    printf("\n");
  }
  return 0;
}
