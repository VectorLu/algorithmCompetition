/*
 有n盏灯，编号为1-n。第1个人把所有灯打开，第2个人按下所有编号为2
 的倍数的开关（这些灯将被关掉），第3个人按下所有编号为3的倍数的开关
 （其中关掉的灯打开，打开的灯关闭），依次类推，一共有k个人，问最后有
 哪些灯开着？输入n和k，输出开着的灯的编号。k<=n<=1000。
 */
#include <stdio.h>
#include <string.h>
#define maxn 1010
int light[maxn];

int main()
{
    int n, k, first = 1;
    //将light数组清零
    memset(light, 0, sizeof(light));
    scanf("%d%d", &n, &k);
    //模拟开关灯，当i = 1的时候，j%i == 0
    //light[j]都变为1，即为开灯
    for(int i = 1; i <= k; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j % i == 0){light[j] = !light[j];}
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(light[i])
        {
          //当不是第一个输出的时候，在输出数字之前还
          //输出一个空格，即将输出的数字用空格隔开
          if(first) {first = 0;}
          else {printf(" ");}
          printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
