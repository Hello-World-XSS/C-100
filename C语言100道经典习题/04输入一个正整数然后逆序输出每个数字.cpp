#include<stdio.h>
int main()
{
    int n,m;
    char i[20];
    printf("������һ��������:\n");
    gets(i);
    for(n=0;i[n]!='\0';n++)
        ;
    for(m=n-1;m>=0;m--)
    printf("%-3c",i[m]);
    return 0;
}
