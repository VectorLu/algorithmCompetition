//韩信点兵问题，又称中国剩余定理
//5和7的公倍数除以3余1的最小数是70
//3和7的公倍数除以5余1的最小数是21
//3和5的公倍数除以7余1的最小数是15
//总数除以3、5、7的余数分别设为a,b,c
//则sum = a*70 + b*21 + c*15
//再按范围减去105
#include <stdio.h>
int main()
{
  int a, b, c;
  while(scanf("%d%d%d", &a, &b, &c)!=0)
  {
    int sum = 0;
    sum = a*70 + b*21 + c*15;
    while(sum > 100)
    {
      sum -= 105;
    }
    if(sum < 10)
    {
      printf("No answer\n");
    }
    else
    {
      printf("%d\n", sum);
    }
  }
  return 0;
}
