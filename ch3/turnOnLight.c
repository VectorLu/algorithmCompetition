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
    memset(light, 0, sizeof(light));
    scanf("%d%d", &n, &k);
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
            if(first) {first = 0;}
            else {printf(" ");}
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
