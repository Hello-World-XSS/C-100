#include<stdio.h>
int main()
{
    double a[2][4];
    double sum=0;
    printf("�������һ�ŵĳɼ���\n");
    for(int i=0;i<=3;i++)
        {
            scanf("%lf",&a[0][i]);
            sum+=a[0][i];
        }
    printf("������ڶ��ŵĳɼ���\n");
    for(int i=0;i<=3;i++)
        {
            scanf("%lf",&a[1][i]);
            sum+=a[1][i];
        }
    printf("%.3f",sum/8);
    return 0;
}
