#include <stdio.h>
#define INF 1000000
int main()
{
    int x, n = 0, s = 0, kase = 0, min = INF, max = -INF;
    while(scanf("%d", &n) && n)
    {
      for(int i = 0; i < n; i++)
      {
        scanf("%d", &x);
        if(min > x)
        {
          min = x;
        }
        if(max < x)
        {
          max = x;
        }
        s += x;
      }
      if(kase)
      {
        printf("\n");
      }
      printf("case%d: min = %d, max = %d, average = %f\n", ++kase, min, max, (double)s/n);
    }
    return 0;
}
