#include <stdio.h>

int main()
{
  //use sqrt
  /*
  for(int a = 1; a <= 9; a++)
  {
    for(int b = 1; b <= 9; b++)
    {
      int n = a*1100 + b*11;
      int m = floor(sqrt(n) + 0.5);
      if(m*m == n)
      {
        printf("%d\n", n);
      }
    }
  }
  */

  //use enum to avoid sqrt
  for(int x = 1; ; x++)
  {
    int n = x*x;
    if(n < 1000)
    {
      continue;
    }
    if(n > 9999)
    {
      break;
    }
    int high = n/100;
    int low = n % 100;
    if(high/10==hgih%10 && low/10==low%10)
    {
      printf("%d\n", n);
    }
  }

  return 0;
}
