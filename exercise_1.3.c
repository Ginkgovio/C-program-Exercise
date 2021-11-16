#include <stdio.h>//辗转相除法
int main(void)
{
	int m = 0, n = 0;
	int t = 0;
	scanf_s("%d %d", &m, &n);
	while (t = m % n) 
	{
		m = n;
		n = t;
	
	}
	printf("最大公约数是%d",n);
	return 0;
}