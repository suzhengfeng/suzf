//�������
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    int arr[30][30] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr[0][0] = 1;
            printf("%5d\n", arr[0][0]);
        }
        else
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0)
                {
                    arr[i][j] = 1;
                    printf("%5d", arr[i][j]);
                }
                else if (j == i)
                {
                    arr[i][j] = 1;
                    printf("%5d", arr[i][j]);
                }
                else
                {
                    arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
                    printf("%5d", arr[i][j]);
                }
            }
            printf("\n");
        }

    }
    return 0;
}

//����ת��
#include<stdio.h>
int main(){
    int n,m,a[10][10],i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }
}