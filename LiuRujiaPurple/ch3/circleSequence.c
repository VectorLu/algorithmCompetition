#include <stdio.h>
#include <string.h>
#define max 105

//环形串s的表示法p是否比表示法q的字典序小
int less(const char* s, int p, int q)
{
  int n = strlen(s);
  for(int i = 0; i < n; i++)
  {
    if(s[(p+i)%n] != s[(q+i)%n])
    {return s[(p+i)%n] < s[(q+i)%n];}
  }
  return 0;
}

int main()
{
  int T;
  char s[max];
  scanf("%d", &T);
  while(T--)
  {
    scanf("%s", s);
    int ans = 0;
    int n = strlen(s);
    for(int i = 1; i < n; i++)
    {
      if(less(s, i, ans)){ans = i;}
    }
    for(int i = 0; i < n; i++)
    {
      putchar(s[(i+ans)%n]);
    }
    putchar('\n');
  }
  return 0;
}
