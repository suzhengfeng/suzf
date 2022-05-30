/*
//在一个有序数组中查找具体的某个数字
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	while (left <= right)
	{
       if (arr[mid] > k)
	   {
		right = mid - 1;
	   }
	   else if (arr[mid] < k)
	   {
		left = mid + 1;
	   }
	   else
	   {
		printf("找到了下标为%d\n",mid);
		break;
	   }
	}
	
	if (left > right)
	{
		printf("找不到%d\n");
	}
	return 0;
}*/
/*
//演示多个字符从两端移动，向中间汇聚
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to my world!!!!!";
	char arr2[] = "########################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr1);
	return 0;
}*/
/*
//模拟用户登录，并且只能登录三次
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{

		printf("登陆成功\n");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
		
	}
	if (i == 3)
	{
		printf("三次密码错误，退出程序\n");
		return 0;
	}
}*/
/*
//在屏幕中输出9*9乘法表
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
//给定两个数，求这两个数的最大公约数
//辗转相除法
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);
}*/
//abc排序
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d%d%d\n", a, b, c);
	return 0;
}

//猜数字游戏
//1, 电脑生成一个随机数
//2,猜数字
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*****************************************\n");
	printf("**********1. play      0.exit************\n");
	printf("*****************************************\n");
}
void game()
{
	//生成随机数
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	//猜数字
	while (1)
	{
		printf("猜猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
           printf("猜大了\n");
		}
			
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}


	}
}
int main()
{
	//时间戳来设置为随机数的生成起点
    srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
				printf("选择错误\n");
		}
	} while (input);
	return 0;
}

/*
//判断润年
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf((a % 4 == 0 && a % 100 != 0) || a % 400 == 0 ? "yes" : "no");
	return 0;
}
*/
/*
//判断整数能够被2 3 7中哪几个数整除并升序输出
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a % 2==0)
	{
		printf("2 ");
		if (a % 3 == 0)
		{
			printf("3 ");
			if (a % 7 == 0)
			{
				printf("7");
			}
		}
		
	}
		
	else
	{
        printf("n");
	}
		
	return 0;
}*/
//简易计算器
//方法1
#include<stdio.h>
int main()
{
    double a,b;
    char ch;
    while(scanf("%lf %c %lf",&a,&ch,&b)!=EOF)
    {
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            if(ch=='+')
                printf("%.4lf%c%.4lf=%.4lf\n",a,ch,b,a+b);
                else if(ch=='-')
                    printf("%.4lf%c%.4lf=%.4lf\n",a,ch,b,a-b);
            else if(ch=='*')
                printf("%.4lf%c%.4lf=%.4lf\n",a,ch,b,a*b);
            else
            {
                if(b==0.0)
                    printf("Wrong!Division by zero!\n");
                else
                    printf("%.4lf%c%.4lf=%.4lf\n",a,ch,b,a/b);
            }
        }
        else
            printf("Invalid operation!\n");
    }
    return 0;
}
//方法二
#include<stdio.h>
int main(void)
{
    double a,b;//精度问题导致用float无法通过
    char sf;
    scanf("%lf%c%lf",&a,&sf,&b);
    switch(sf)
    {
        case '+':
            printf("%.4f+%.4f=%.4f",a,b,a+b);
            break;
        case '-':
            printf("%.4f-%.4f=%.4f",a,b,a-b);
            break;
        case '*':
            printf("%.4f*%.4f=%.4f",a,b,a*b);//浮点数要注意精度问题
            break;
        case '/':
            {
                if(b<0.000001)
                    printf("Wrong!Division by zero!");
                else
                    printf("%.4f/%.4f=%.4f",a,b,a/b);
                break;
            }
        default:
            printf("Invalid operation!");
    }
    return 0;
}


//奇偶个数
#include<stdio.h>
int main()
{
	int n ;
	scanf("%d",&n);
	int i, j, k, m;
	k = n/ 2;//k就是偶数个数
	m = n - k;
	printf("%d %d", m, k);
	return 0;
}
//圣诞树
#include<stdio.h>
int main()
{
	int c = 1;//用于控制最后的尾巴（数柄）；
	int n = 0;//层数
     scanf("%d", &n);
	 int d = 3 * n;//a和d用于控制最开始的空白数；
	for (int i = 1; i <= n; i++)
	{
		for (int a = d -1;a>0;a--)//
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)//k代表一行打印多少个“*     ”
		{
			printf("*     ");//把第一层当作“*     ”来打印
		}
		printf("\n");
		for (int a = d - 2; a > 0; a--)//同上
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("* *   ");
		}
		printf("\n");
		for (int a = d-3; a > 0; a--)//同上
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("* * * ");
		}
		printf("\n");
		d = d - 3;
	}
	while (c<=n)
	{
		for (int i = 1; i <= (6 * n - 1) / 2; i++)
		{
			printf(" ");
		}
		printf("*\n");
		c++;
	}
	return 0;
}

//超级圣诞树
#include<stdio.h>
int main()
{
int i, j;
int k, h, n, z,s,m;
int rowbegin,rowend,rankbegin,rankend;

scanf("%d",&n);		//输入数值

int X = 3*(1<<n-1);			
int Y = 5*(1<<n-1)+(1<<n-1)-1;

char b[X][Y];			//定义一个刚好可以存放图形的二维数组


for(i=0;i<X;i++)			//将数组初始化，全为空格
	{
	for(j=0;j<Y;j++)
		{
			
			b[i][j] = ' ';
			
		
		}

	}
for(i=0;i<3;i++)			//将输入为 1 时的图形存放到数组内
	{
		for(j=0;j<5;j++)
			{
				if((i==0 && j%2==0) || (i%2!=0 && j%2!=0) || i==j)
					{
						b[i][j] = '*';
					}
				else
					{
						b[i][j] = ' ';
					}
			
			}
	
	}

for(h=0,z=0,k=0,s=0,m=0;s<n+n-1;h++,z++,s++,k=0)	//控制循环的次数
{
		
	if (z>1)
		{
			z=0;
			h--;
			k=h;
			m=k;
		}
	
	rowbegin = (k>0)*3*(1<<k-1);		//控制行的开始数值
	rowend = 3*(1<<m);					//控制行的结束数值

	rankbegin = (h>0)*(5*(1<<(h-1))+(1<<(h-1)))-((k>0)<<k-1)*(3); //控制列的开始数值
	rankend = 5*(1<<h)+(1<<h)-1-((k>0)<<k-1)*(3);					//控制列的结束数值
	
	for(i=rowbegin;i<rowend;i++)
		{
			for(j=rankbegin;j<rankend;j++)
				{
					b[i][j] = b[i-rowbegin][j-rankbegin];
				}
		}
}


for(i=X-1;i>=0;i--)				//输出树叶
{
	for(j=Y-1;j>=0;j--)
		{
			printf("%c",b[i][j]);
		
		}
	
	putchar('\n');
}

for(i=0;i<n;i++)				//输出树干
{
	for(j=0;j<Y;j++)
		{
			printf("%c",b[X-1][j]);
		}
	
	putchar('\n');
}

return 0;

}
//扫雷
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	char* a = (char*)calloc((m + 2) * (n + 2), sizeof(char));//我觉calloc更好用 因为自带初始化
	int i = 0;
	int j = 0;
	for (i = 1; i < m + 1; i++)
	{
		for (j = 1; j < n + 1; j++)
		{
			scanf(" %c ", a + i * (n + 2) + j);//注意这里的读取一定要加上前后两个空格 来忽略对换行的读取 
            //我就是在这里调了半天
		}
	}
	int si = 0;
	int sj = 0;
	int num = 0;
	for (i = 1; i < m + 1; i++)
	{
		for (j = 1; j < n + 1; j++)
		{
			if (*(a + i * (n + 2) + j) == '*')//如果为 * 则直接输出 *
				printf("*");
			else//如果不为 * 说明需要进行九宫格判断
			{
				num = 0;
				sj = j - 1;
				for (si = i - 1; si <= i + 1; si++)
				{
					for (sj = j - 1; sj <= j + 1; sj++)
					{
						if (*(a + si * (n + 2) + sj) == '*')
							num++;
					}
				}
				printf("%c", '0' + num);//其实这里是多余的 可以直接将 num 作整数输出
			}
		}
		printf("\n");
	}
	return 0;
}
//三角形
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==n)//处理最后一行这种特殊情况。
            {
                for(int i=1;i<=n;i++)
                    cout<<"* ";
            }
            else
                for(int k=1;k<=n;k++)//前面n-1行地规律，当列等于第一列或者行和列等时，有*，否则没有。注意空格数。
                {
                    if(k==1||k==j)
                        cout<<"* ";//一个*和一个空格
                    else cout<<"  ";//两个空格
                }
            cout<<endl;
        }
    }
    return 0;
}
//空心三角形
#include<stdio.h>
int main()
{
    int r,c,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(r=1;r<=n;r++)
        {
            for(c=1;c<=n;c++)
            {
                if(c==1||r==n||c==r)
                printf("%-2c",'*');
                else
                printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}