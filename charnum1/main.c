/*��Ŀ����
��дһ�������������ַ����к��еĲ�ͬ�ַ��ĸ������ַ���ACSII�뷶Χ��(0~127)�����б�ʾ���������������ַ�����ڷ�Χ�ڵĲ���ͳ�ơ������ͬ���ַ�ֻ����һ��
���磬�����ַ���abaca���ԣ���a��b��c���ֲ�ͬ���ַ���������3��
��������:
����N���ַ����ַ���ACSII�뷶Χ�ڡ�

�������:
�����Χ��(0~127)�ַ��ĸ�����*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000]={0};
    int b[129]={0};

    gets(a);
    int len= strlen(a);
    int x=0;
    int y=0;
    for(;x<len;x++)
    {
        y=a[x];
        if(y<=127 && y>=0);
        {
            b[y]=1;
        }
    }
    int t=0;
    int num=0;
    for(;t<128;t++)
    {
        if(b[t]==1)
            num++;
    }
    printf("%d",num);


    return 0;
}
