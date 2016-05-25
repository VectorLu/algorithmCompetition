#include <stdio.h>
#include <math.h>

int main()
{
  double sum = 0.0;
  double n, delta = 1.0;
  for(int i = 0; ; i++)
  {
    sum = sum + delta;
    printf("sum = %f\n", sum);
    n += 2;
    printf("n = %f\n", n);
    if(i%2 == 0)
    {
      delta = -1/n;
      printf("delta = %f\n", delta);
    }
    else
    {
      delta = 1/n;
      printf("delta = %f\n", delta);
    }
    if(fabs(delta) < 1e-6)
    {
      break;
    }
  }
  printf("%.6f\n", sum);
  return 0;
}
