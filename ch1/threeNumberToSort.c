#include <stdio.h>
//
int main()
{
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);

	//a >= b
	if(a < b)
	{
		t = a;
		a = b;
		b = t;
	}

	//b >= c
	if(b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	//a >= c
	if(a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
