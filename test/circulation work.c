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