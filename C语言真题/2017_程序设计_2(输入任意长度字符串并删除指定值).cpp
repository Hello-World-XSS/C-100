#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{void delchar(char str[],char c);
    char *str=0,c;
    int i=0;
    str=(char*)malloc(1);//�ȼ���(char*)malloc(sizeof(char))
    for(i=0;(*(str+i)=getchar())!='\n';i++)  //�������ⳤ���ַ���
        str=(char*)realloc(str,strlen(str)+1);
    *(str+i)='\0';
    printf("����Ҫɾ�����ַ�:");
    scanf("%s",&c);
    delchar(str,c);
    free(str);
return 0;
}
void delchar(char str[],char c)
{
    int num,n;
    int k=0;
    int len=strlen(str);
    printf("����:%d\n",len);
    for(n=0;n<len;n++)
       {if(str[n]==c)
            k++;
        else
         str[n-k]=str[n];
       }
    for(num=0;num<len-k;num++)
    printf("%c",str[num]);

}
