#define LOCAL
#include <stdio.h>
const int INF = 100000;
int main()
{
  #ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
  #endif

  int x = 0, n = 0, min = INF, max = -INF , sum = 0;
  while(scanf("%d", &x) == 1)
  {
    sum += x;
    n++;
    if(min > x)
    {
      min = x;
    }
    if(max < x)
    {
      max = x;
    }
    printf("x = %d , min = %d, max = %d\n", x, min, max);
  }
  printf("max = %d\n", max);
  printf("min = %d\n", min);
  printf("average = %.3f\n", (double) sum/n);
  return 0;
}
