#include<stdio.h>
#include<string.h>
int main()
{
    char title[100];
    printf("������һ���ַ���\n");
    gets(title);
    int changdu=strlen(title);
    printf("����%d\n",changdu);
    int zimu=0,kongge=0,shuzi=0,qita=0;
    for(int i=0;i<=changdu;i++)
       {
        if((title[i]>='a'&&title[i]<='z')||(title[i]>='A'&&title[i]<='Z'))
                      zimu++;
        else if(title[i]>='0'&&title[i]<='9')
                      shuzi++;
        else if(title[i]==' ')
                      kongge++;
        else qita++;
       }
       printf("��ĸ%d\n",zimu);
       printf("����%d\n",shuzi);
       printf("�ո�%d\n",kongge);
       printf("�����ַ�%d\n",qita);
    return 0;
}

