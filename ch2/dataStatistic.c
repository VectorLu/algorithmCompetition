#include <stdio.h>
const int INF = 100000;
int main()
{
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
  }
  printf("max = %d\n", max);
  printf("min = %d\n", min);
  printf("average = %.3f\n", (double) sum/n);
  return 0;
}
