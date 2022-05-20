#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int jc = 1;
	int jch = 0;
	scanf("%d", &i);

	for (n = 1; n <= i; n++)
	{
		jc = jc * n;
		jch = jch + jc;
	}

	printf("%d\n", jch);
	return 0;
}