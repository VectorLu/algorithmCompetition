#include <stdio.h>
int main()
{
  long n,m;
  int kase = 1;
  while(scanf("%ld%ld", &n, &m)==2 && n && m)
  {
    double sum = 0;
    for(long i = n; i <= m; i++)
    {
      sum += (double)1/(i*i);
    }
    printf("Case%d: %.5f\n", kase, sum);
    kase++;
  }
  return 0;
}
