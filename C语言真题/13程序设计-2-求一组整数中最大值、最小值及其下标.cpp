#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20],max=0,aflag=0,iflag=0;
    for(int i=0;i<20;i++)
    {
        a[i]=rand();

        if(a[i]>max)
            {
                max=a[i];
                aflag=i;
            }
        printf("%d\t",a[i]);
    }
    int min=a[0];
    for(int i=0;i<20;i++)
    {
        if(a[i]<min)
            {
                min=a[i];
                iflag=i;
            }
    }
    printf("\n\n���ֵ%d\t�±�Ϊ%d\n��Сֵ%d\t,�±�Ϊ%d",max,aflag,min,iflag);
    return 0;
}

