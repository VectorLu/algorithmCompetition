/*
p50 猜数字游戏的提示
给定答案序列和用户猜的序列，统计有多少个数字位置正确(A)，
多少个数字在两个序列里都出现过但是位置不对(B)

根据这道题的解答，题目中其实应该说明答案序列和正常的猜测
序列不含零。个人觉得这道题的解法可以用于序列中相同元素的查找，
比如生物的基因学方面可能有相关的问题。
*/

#include <stdio.h>
#define max 1010

int main()
{
  int n, a[max], b[max];
  int kase = 0;
  // n = 0时输入结束
  while(scanf("%d", &n) == 1 && n)
  {
    printf("Game %d:\n", ++kase);
    for(int i = 0; i < n; i++)
    {scanf("%d", &a[i]);}
    for(;;)
    {
      int A = 0, B = 0;
      for(int i = 0; i < n; i++)
      {
        scanf("%d", &b[i]);
        if(a[i] == b[i]){A++;}
      }
      //正常的猜测序列不含0，故判断第一个元素是否为0即可
      if(b[0] == 0){break;}
      for(int d = 1; d <=9; d++)
      {
        //count the times number d appears in a and b
        int c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++)
        {
          if(a[i] == d){c1++;}
          if(b[i] == d){c2++;}
        }
        if(c1 < c2){B += c1;}
        else {B += c2;}
      }
      printf("    (%d,%d)\n", A, B-A);
    }
  }
  return 0;
}
