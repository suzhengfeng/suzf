#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() 
{
	int i = 0;
	int n = 0;
	int s = 1;
	scanf("%d", &n);
	for (i = 1; i<=n; i++)
	{
		s = s * i;
	}
	printf("%d\n", s);
	return 0;
}