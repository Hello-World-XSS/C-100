#include<stdio.h>
int main()
{
    int m,n,p,q,max=0;
    printf("������m,n��ֵ��\n");
    scanf("%d,%d",&m,&n);
    int a[m][n];
    for(p=0;p<m;p++)
     for(q=0;q<n;q++)
        {
            scanf("%d",&a[p][q]);
            if(a[p][q]>max)
                max=a[p][q];
        }
    for(p=0;p<m;p++)  //��ӡM*N����
     {
         for(q=0;q<n;q++)
           printf("%-3d",a[p][q]);
         printf("\n");
     }
    printf("���ֵΪ:%d\n",max);//������ֵ
    return 0;
}
