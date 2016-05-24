//三位数反转
#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d", &n);
	m = (n%10)*100 + (n/10%10)*10 + (n/100);

	//如果十位或各位为0，是否输出，如需输出，按下面的方法输出
	//printf("%03d\n", m);
	//如果不需要输出0
	printf("%d\n", m);
	return 0;
}