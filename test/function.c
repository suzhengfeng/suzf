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
//素数和
#include<stdio.h>
int issushu(int n){
    int i;
    if(n==1){
    	return 0;
	}
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int i,a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        if(issushu(i)){
            sum+=i;
        }
    }
    printf("%d",sum);
}
//数组匹配
#include <stdio.h>
int num(int a,int b)
{
	if(a>=b)
	return a-b;
	else
	return b-a;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100]={0};
    int b[100]={0};
    int sum1=0,sum2=0,min,k,l;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
	for(int i=0;i<n;i++)
	{
		sum1+=a[i];
	}
	min=sum1;
	for(int i=0;i<m;i++)
	{
		sum2=b[i];
		for(int j=i+1;j<=m;j++)
		{
			if(num(sum1,sum2)<min)
			{
				min=num(sum1,sum2);
				k=i;
				l=j;
			}
			sum2+=b[j];
			
		}
	}
	for(int i=k;i<l;i++)
	{
		printf("%d ",b[i]);
	}
  
    return 0;
}
