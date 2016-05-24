#include <stdio.h>
//注意讨论No answer的情况
int main()
{
	int a, b, n, m;
	scanf("%d%d", &n, &m);
	a = (4*n - m)/2;
	b = n - a;
	//use short-circuit to be faster
	if(m % 2 == 1 ||  a < 0 || b < 0)
	{
		printf("No answer\n");
	}
	else
	{
		printf("%d %d\n", a, b);
	}
	return 0;
}