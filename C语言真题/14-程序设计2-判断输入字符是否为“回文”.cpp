#include<stdio.h>
int main()
{
    char a[50];
    gets(a);
    int length,flag=0;
    for(length=0;a[length]!='\0';length++)
        ;
    for(int i=0;i<=length/2;i++)
    {
        if(a[i]!=a[length-i-1])
            flag=1;
    }
    if(flag==0)
        printf("���ַ���Ϊ����");
    else printf("���ǻ���");
    return 0;
}
