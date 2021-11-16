#include <stdio.h>//最大公约数，较小值
int main(void)
{
	int m = 0, n = 0;
	scanf_s("%d %d", &m, &n);
	int max = 0;//假设最大公约数max就是m和n的较小值
	if (m > n)
		max = n;
	else
		max = m;

	while (1)
	{
		if (m % max == 0 && n % max == 0) {
			printf("最大公约数是%d", max);
			break;
		}
		max--;
	}

	return 0;
}