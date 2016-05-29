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
