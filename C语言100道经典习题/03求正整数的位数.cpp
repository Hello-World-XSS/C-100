#include<stdio.h>
int main()
{
    char i[20];
    int n;
    printf("������һ��������:\n");
    gets(i);
    for(n=0;i[n]!='\0';n++)
        ;
    printf("λ����%d",n);
    return 0;
}
