#include <stdio.h>
#include <math.h>

int main()
{
  const double pi = acos(-1.0);
  double r, h, sr, sh,s;
  scanf("%lf%lf", &r, &h);
  sr = pi*r*r;
  sh = 2*pi*r*h;
  s = 2*sr + sh;
  printf("Area = %.3f\n", s);
  return 0;
  
}
