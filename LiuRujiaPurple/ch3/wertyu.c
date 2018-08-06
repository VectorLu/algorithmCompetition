#include <stdio.h>

char *s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(void)
{
	int i, c;
	while((c = getchar()) != EOF)
	{
		for(i = 1; s[i] && s[i] != c; i++)
			;
    /*注意getchar()的返回值是标准输入的ASCII码，
    所以读零的时候s[i] = 48，不是0，所以if还是执行
    */
		if(s[i])
			putchar(s[i-1]);
		else
			putchar(c);
	}
	return 0;
}
