/*//打印100-200之间的素数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i)== 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}*/
//判断闰年
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0 )|| (y % 400 == 0))
	
	 return 1;
	else
	 return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000;year++)
	{
		if (1 == is_leap_year(year))
		{
			printf("%d  ", year);
		}
	}
	return 0;
}