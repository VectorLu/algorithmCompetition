#include <stdio.h>
int main()
{
  int n = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
  {
    int numSign = 2*n - 1 - 2*i;
    int numSpace = i;
    for(int j = 0; j < numSpace; j++)
    {
      printf(" ");
    }
    for(int j = 0; j < numSign; j++)
    {
      printf("#");
    }
    for(int j = 0; j < numSpace; j++)
    {
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}
