#include <stdio.h>
void result(int num, int *result_add, int *result_multi)
{
  int a = num/100;
  int b = num/10%10;
  int c = num%10;

  *result_add += (a+b+c);
  *result_multi *= (a*b*c);
}

int main()
{
  int result_add , result_multi;
  for(int abc = 100; abc < 333; abc++)
  {
    int def = 2*abc;
    int ghi = 3*abc;

    result_add = 0;
    result_multi = 1;

    result(abc, &result_add, &result_multi);
    result(def, &result_add, &result_multi);
    result(ghi, &result_add, &result_multi);

    if(result_add == 45 && result_multi == 362880)
    {
      printf("%d %d %d\n", abc, def, ghi);
    }
  }
  return 0;
}
