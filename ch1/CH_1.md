mac, Xcode
**some terrible code , see what output they lead**

1. no mistake
```C
printf（"%f\n", sqrt(-10));
```
> nan

2. no mistake
```C
printf("%f\n", 1.0/0.0);
```
> inf

3.
```C
#include <stdio.h>
#include <math.h>
int main()
{   
    //no mistake
    printf("%f\n", 0.0/0.0);

    //no mistake, but warn
    //int isn't corresponded with double
    printf("%f\n", 0/0);

    //division by zero is undefined
    printf("%d\n", 0/0);
    return 0;
}
```
> nan
> nan
> 73823

4. Two warn that division by zero is undefined
```C
printf("%d\n", 1/0);
printf("%d\n", 0/0);
```

> 1606416392

5. if&else nearby

```C
#include <stdio.h>

int main()
{
    if(1)
        if(0)
            printf("x\n");
    else
        printf("y\n");
    return 0;
}
```
> y
