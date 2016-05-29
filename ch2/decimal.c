#include <stdio.h>
void decimal(int a, int b, int c);
int main()
{
  int a, b, c;
  int kase = 1;
  while(scanf("%d%d%d", &a, &b, &c)==3 && a && b && c)
  {
    printf("Case%d: ", kase);
    decimal(a, b, c);
    printf("\n");
    kase++;
  }
  return 0;
}

//关键在于小数部分的除法究竟是怎样除的
//已经太习惯去除但是忘记了究竟是怎样的原理
//就是把小数当做整数一样除，不过得到的商放在小数点之后
void decimal(int a, int b, int c)
{
  printf("%d.", a/b);
  int rem = a%b;
  for(int i = 1; i <= c; i++)
  {
    rem *= 10;
    printf("%d", rem/b);
    rem = rem%b;
  }
}
