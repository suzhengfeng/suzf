/*
//��һ�����������в��Ҿ����ĳ������
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
		printf("�ҵ����±�Ϊ%d\n",mid);
		break;
	   }
	}
	
	if (left > right)
	{
		printf("�Ҳ���%d\n");
	}
	return 0;
}*/
/*
//��ʾ����ַ��������ƶ������м���
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
//ģ���û���¼������ֻ�ܵ�¼����
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{

		printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
		
	}
	if (i == 3)
	{
		printf("������������˳�����\n");
		return 0;
	}
}*/
/*
//����Ļ�����9*9�˷���
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
//���������������������������Լ��
//շת�����
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
//abc����
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

//��������Ϸ
//1, ��������һ�������
//2,������
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
	//���������
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	//������
	while (1)
	{
		printf("�²����֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
           printf("�´���\n");
		}
			
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}


	}
}
int main()
{
	//ʱ���������Ϊ��������������
    srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
				printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}

/*
//�ж�����
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
//�ж������ܹ���2 3 7���ļ������������������
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
//���׼�����
//����1
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
//������
#include<stdio.h>
int main(void)
{
    double a,b;//�������⵼����float�޷�ͨ��
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
            printf("%.4f*%.4f=%.4f",a,b,a*b);//������Ҫע�⾫������
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


//��ż����
#include<stdio.h>
int main()
{
	int n ;
	scanf("%d",&n);
	int i, j, k, m;
	k = n/ 2;//k����ż������
	m = n - k;
	printf("%d %d", m, k);
	return 0;
}
//ʥ����
#include<stdio.h>
int main()
{
	int c = 1;//���ڿ�������β�ͣ���������
	int n = 0;//����
     scanf("%d", &n);
	 int d = 3 * n;//a��d���ڿ����ʼ�Ŀհ�����
	for (int i = 1; i <= n; i++)
	{
		for (int a = d -1;a>0;a--)//
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)//k����һ�д�ӡ���ٸ���*     ��
		{
			printf("*     ");//�ѵ�һ�㵱����*     ������ӡ
		}
		printf("\n");
		for (int a = d - 2; a > 0; a--)//ͬ��
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("* *   ");
		}
		printf("\n");
		for (int a = d-3; a > 0; a--)//ͬ��
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

//����ʥ����
#include<stdio.h>
int main()
{
int i, j;
int k, h, n, z,s,m;
int rowbegin,rowend,rankbegin,rankend;

scanf("%d",&n);		//������ֵ

int X = 3*(1<<n-1);			
int Y = 5*(1<<n-1)+(1<<n-1)-1;

char b[X][Y];			//����һ���պÿ��Դ��ͼ�εĶ�ά����


for(i=0;i<X;i++)			//�������ʼ����ȫΪ�ո�
	{
	for(j=0;j<Y;j++)
		{
			
			b[i][j] = ' ';
			
		
		}

	}
for(i=0;i<3;i++)			//������Ϊ 1 ʱ��ͼ�δ�ŵ�������
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

for(h=0,z=0,k=0,s=0,m=0;s<n+n-1;h++,z++,s++,k=0)	//����ѭ���Ĵ���
{
		
	if (z>1)
		{
			z=0;
			h--;
			k=h;
			m=k;
		}
	
	rowbegin = (k>0)*3*(1<<k-1);		//�����еĿ�ʼ��ֵ
	rowend = 3*(1<<m);					//�����еĽ�����ֵ

	rankbegin = (h>0)*(5*(1<<(h-1))+(1<<(h-1)))-((k>0)<<k-1)*(3); //�����еĿ�ʼ��ֵ
	rankend = 5*(1<<h)+(1<<h)-1-((k>0)<<k-1)*(3);					//�����еĽ�����ֵ
	
	for(i=rowbegin;i<rowend;i++)
		{
			for(j=rankbegin;j<rankend;j++)
				{
					b[i][j] = b[i-rowbegin][j-rankbegin];
				}
		}
}


for(i=X-1;i>=0;i--)				//�����Ҷ
{
	for(j=Y-1;j>=0;j--)
		{
			printf("%c",b[i][j]);
		
		}
	
	putchar('\n');
}

for(i=0;i<n;i++)				//�������
{
	for(j=0;j<Y;j++)
		{
			printf("%c",b[X-1][j]);
		}
	
	putchar('\n');
}

return 0;

}
//ɨ��
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	char* a = (char*)calloc((m + 2) * (n + 2), sizeof(char));//�Ҿ�calloc������ ��Ϊ�Դ���ʼ��
	int i = 0;
	int j = 0;
	for (i = 1; i < m + 1; i++)
	{
		for (j = 1; j < n + 1; j++)
		{
			scanf(" %c ", a + i * (n + 2) + j);//ע������Ķ�ȡһ��Ҫ����ǰ�������ո� �����ԶԻ��еĶ�ȡ 
            //�Ҿ�����������˰���
		}
	}
	int si = 0;
	int sj = 0;
	int num = 0;
	for (i = 1; i < m + 1; i++)
	{
		for (j = 1; j < n + 1; j++)
		{
			if (*(a + i * (n + 2) + j) == '*')//���Ϊ * ��ֱ����� *
				printf("*");
			else//�����Ϊ * ˵����Ҫ���оŹ����ж�
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
				printf("%c", '0' + num);//��ʵ�����Ƕ���� ����ֱ�ӽ� num ���������
			}
		}
		printf("\n");
	}
	return 0;
}
//������
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==n)//�������һ���������������
            {
                for(int i=1;i<=n;i++)
                    cout<<"* ";
            }
            else
                for(int k=1;k<=n;k++)//ǰ��n-1�еع��ɣ����е��ڵ�һ�л����к��е�ʱ����*������û�С�ע��ո�����
                {
                    if(k==1||k==j)
                        cout<<"* ";//һ��*��һ���ո�
                    else cout<<"  ";//�����ո�
                }
            cout<<endl;
        }
    }
    return 0;
}
//����������
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