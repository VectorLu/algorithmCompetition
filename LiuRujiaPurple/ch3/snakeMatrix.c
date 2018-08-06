/*
 例如
 10 11 12 1
 9  16 13 2
 8  15 14 3
 7  6  5  4
 其实就是从右上方开始下、左、上、右地循环填数
 */
#include <stdio.h>
#include <string.h>
#define max 20
int snake[max][max];

int main()
{
    int n, x, y, tot;
    scanf("%d", &n);
    memset(snake, 0, sizeof(snake));
    tot = snake[x = 0][y = n - 1] = 1;
    
    //下左上右，并避开已经填过数的位置
    while(tot < n*n)
    {
        while(x+1<n && !snake[x+1][y])
        {snake[++x][y] = ++tot;}
        while(y-1>=0 && !snake[x][y-1])
        {snake[x][--y] = ++tot;}
        while(x-1>=0 && !snake[x-1][y])
        {snake[--x][y] = ++tot;}
        while(y+1<n && !snake[x][y+1])
        {snake[x][++y] = ++tot;}
    }
    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            //每个数占3位，左对齐
            printf("%-3d ", snake[x][y]);
        }
        printf("\n");
    }
    
    return 0;
}
