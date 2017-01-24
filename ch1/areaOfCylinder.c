#include <stdio.h>
#include <math.h>

int main(void)
{
    const double pi = acos(-1.0);
    double s, s1, s2, r, h;
    scanf("%lf%lf", &r, &h);
    s1 = 2*r*h;
    s2 = r*r*pi;
    s = s1 + 2*s2;
    printf("Area = %.3f\n", s);
    
    return 0;
}