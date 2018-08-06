/**
 * 1.6.2 所有蚂蚁的速度一样是关键，求 所有 蚂蚁掉下的最短时间和最长时间，
 * 由此可以忽略蚂蚁个体的不同，认为蚂蚁是保持原样交错而过
 **/
#include <cstdio>
const int MAX_N = 1000000;
int x[MAX_N];

int max(int x, int y) {
  return x>y ? x : y;
}

int min(int x, int y) {
  return x<y ? x : y;
}

int main() {
  int n, L;
  int minT = 0;
  int maxT = 0;
  scanf("%d %d", &n, &L);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }

  for (int i = 0; i < n; i++) {
    minT = max(minT, min(x[i], L-x[i]));
  }

  for (int i = 0; i < n; i++) {
    maxT = max(maxT, max(x[i], L-x[i]));
  }
  
  printf("%d %d", minT, maxT);
  return 0;
}