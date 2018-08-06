#include <stdio.h>
#include <math.h>

int main()
{
  double sum = 0.0;
  double delta = 1.0;
  double n = 1.0;
  for(int i = 0; ; i++)
  {
    sum = sum + delta;
    n += 2;
    if(i%2 == 0)
    {
      delta = -1/n;
    }
    else
    {
      delta = 1/n;
    }
    if(fabs(delta) <= 1e-6)
    {
      break;
    }
  }
  printf("%.6f\n", sum);
  return 0;
}
