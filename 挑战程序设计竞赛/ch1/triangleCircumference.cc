/*
 * 周长最大的三角形的周长
 * todo: O(nlog(n)) 的解法
 * author: VectorLu
 */
#include <cstdio>
#define MAX_N 110

int main() {
  // input
  int n, a[MAX_N];
  scanf("%d", &n);
  if (n < 3) {return 0;}
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  // solve
  int maxCircumference = 0;
  for (int i1 = 0; i1 < n; i1++) {
    for (int i2 = i1+1; i2 < n; i2++) {
      for (int i3 = i2+1; i3 < n; i3++) {
        if (a[i1]+a[i2]>a[i3] && a[i1]+a[i3]>a[i2] && a[i2]+a[i3]>a[i1] && a[i1]+a[i2]+a[i3] > maxCircumference) {
          maxCircumference = a[i1]+a[i2]+a[i3];
        }
      }
    }
  }

  printf("%d\n", maxCircumference);
  return 0;
}