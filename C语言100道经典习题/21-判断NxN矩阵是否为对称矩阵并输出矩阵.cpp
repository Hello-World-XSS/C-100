#include<stdio.h>
int main()
{
    int n,i,m,flag=0;
    printf("���������Ľ���:\n");
    scanf("%d",&n);
    int a[n][n];
    printf("���������Ԫ��:\n");
    for(i=0;i<n;i++)
        for(m=0;m<n;m++)
          scanf("%d",&a[i][m]);
    for(i=0;i<n;i++)
        {
            for(m=0;m<n;m++)
            {
                if(a[i][m]!=a[m][i])
                    flag=1;
                printf("%-3d",a[i][m]);
            }
            printf("\n");
        }
    if(flag==0)
        printf("Ϊ�Գƾ���\n");
    else
        printf("���ǶԳƾ���\n");
    return 0;
}
