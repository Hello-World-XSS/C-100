#include<stdio.h>
int main()
{
    double a[4][3];
    double average[4];
    printf("������һ��4*3����:\n");
    for(int i=0;i<=3;i++)
    {
        scanf("%lf,%lf,%lf",&a[i][0],&a[i][1],&a[i][2]);
        average[i]=(a[i][0]+a[i][1]+a[i][2])/3;
    }
    for(int i=0;i<=3;i++)
        printf("��%d��ƽ��ֵ%.2f\n",i+1,average[i]);
    return 0;
}
