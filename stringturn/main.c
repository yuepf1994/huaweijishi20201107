/*��Ŀ����
д��һ�����򣬽���һ���ַ�����Ȼ��������ַ�����ת����ַ��������ַ������Ȳ�����1000��

��������:
����N���ַ�

�������:
������ַ�����ת����ַ���*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1001]={0};
    gets(a);

    int len=strlen(a);
    int x=len-1;
    for(;x>=0;x--)
    {
        printf("%c",a[x]);
    }

    return 0;
}
