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
