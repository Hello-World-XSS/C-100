#include<stdio.h>
int main()
{
    int a,b;
    printf("������������\n");
    scanf("%d,%d",&a,&b);
    int nmin=a<b?a:b;
    for(int i=nmin;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("���Լ��Ϊ%d\n",i);
            printf("��С������Ϊ%d",a*b/i);
            break;
        }
    }
    return 0;
}
