#include<stdio.h>
long int Fib(int a);
int flag=0;
int main()
{
    int n;
    printf("������n��ֵ:");
    scanf("%d",&n);
    printf("���Ϊ%d",Fib(n));
    return 0;
}
long int Fib(int n)
{
    flag+=1;
    printf("������%d��\n",flag);
    if(n==0||n==2)
        return 0;
    if(n==1)
        return 1;
    if(n>2)
        return Fib(n-1)+Fib(n-2);
}
