#include <stdio.h>

int main()
{
  int year;
  scanf("%d", &year);

  if((0 == year%400) || ((0 == year%4) && (0 != year%100)))
  {
    printf("yes\n");
  }
  else
  {
    printf("no\n");
  }
  return 0;
}
