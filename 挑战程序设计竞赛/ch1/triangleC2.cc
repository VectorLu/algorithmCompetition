
#include<stdio.h>  
int MAX(int a,int b)  
{  
    return a > b ? a : b;  
}  
int main()  
{  
    int a[10];  
    int i,j,t,n;  
    scanf("%d",&n);  
    for(i = 0; i < n; i++){  
        scanf("%d",&a[i]);  
    }  
    //冒泡排序（升序）   实际上这应该不是冒泡排序
    // todo: 排序算法
    for(i = 0 ;i < n - 1;i ++){  
        for(j = 0;j < n- i -1;j ++){  
            if(a[j] > a[j + 1]){  
                t = a[j];  
                a[j] = a[j + 1];  
                a[j + 1] = t;  
            }  
        }  
    }  
    int ans = 0;    //答案  
    for(i = 0 ;i < n - 2;i ++){  
        int l = a[i] + a[i + 1] + a[i + 2]; //周长   
        //如果可以构成三角形，则更新最大周长   
        if(a[i] + a[i + 1] > a[i + 2]){  
            ans = MAX(ans,l);  
        }  
    }  
    printf("%d\n",ans);  
    return 0;  
}  