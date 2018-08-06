/*
p41的竖式问题

找出所有的形如abc*de的算式，是的在完整的竖式中，
所有的数字都属于一个特定的数字集合。输入数字集合（相邻数字间没有空格），
输出所有满足题意的竖式。每个竖式前应有编号，之后应有一个空行。最后输出解的总数

样例输入：
2357

样例输出：
<1>
  775
X  33
-----
 2325
2325
-----
25575

*/

#include <stdio.h>
#include <string.h>

int main()
{
  int count = 0;
  char s[20], buf[100];
  scanf("%s", s);
  for(int abc = 111; abc < 1000; abc++)
  {
    for(int de = 11; de < 100; de++)
    {
      int x = abc*(de%10);
      int y = abc*(de/10);
      int z = abc*de;

      //sprintf()将信息输出到字符串
      //应当保证字符串足够大，可以容纳输出信息
      //这里将整数转换成了字符串，放到字符数组里
      sprintf(buf, "%d%d%d%d%d", abc, de, x, y,z);
      int ok = 1;
      //strlen()获取buf的实际长度
      for(int i = 0; i < strlen(buf); i++)
      {
        //strchr()在一个字符串中查找单个字符
        //如果buf中没有这个数
        if(strchr(s, buf[i]) == NULL)
        {ok = 0;}
      }
      if(ok)
      {
        printf("<%d>\n", ++count);
        printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z );
      }
    }
  }
  printf("The number of solutions = %d\n", count);
  return 0;
}
