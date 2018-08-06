/* P52, eg3-5, 乍一看是个数学题，但是
真的列出方程很容易发现是多元一次方程，
还是得用枚举的方式解决*/

#include <stdio.h>
#include <string.h>
#define max 100005
int ans [max];

int main()
{
  //T为将要输入的个数，n为输入的数值
  int T, n;
  memset(ans, 0, sizeof(ans));
  for(int m = 1; m < max; m++)
  {
    int x = m, y = m;
    while(x > 0)
    {
      y += x % 10;
      x /= 10;
    }
    if(ans[y] == 0 || m < ans[y]){ans[y] = m;}
  }
  scanf("%d", &T);
  while(T--)
  {
    scanf("%d", &n);
    printf("%d\n", ans[n]);
  }
  return 0;
}
