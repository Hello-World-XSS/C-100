#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char *s);
int main()
{
    printf("������һ���ַ�:\n");
    char *str=0;
    int i=0;
    str=(char*)malloc(1);//�ȼ���(char*)malloc(sizeof(char))
    for(i=0;(*(str+i)=getchar())!='\n';i++)  //�������ⳤ���ַ���
        str=(char*)realloc(str,strlen(str)+1);
    *(str+i)='\0';
    fun(str);
    printf("%s",str);
    free(str);
    return 0;
}
void fun(char *s)
{
    int n=strlen(s);
    int m=0;
    int t;
    for(m=0;m<n/2;m++)
    {
        t=*(s+m);
        *(s+m)=*(s+n-m-1);
        *(s+n-m-1)=t;
    }
}
