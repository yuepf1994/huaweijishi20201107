/*��Ŀ����
��һ��Ӣ������Ե���Ϊ��λ�����ŷš����硰I am a boy���������ŷź�Ϊ��boy a am I��
���е���֮����һ���ո����������г���Ӣ����ĸ�⣬���ٰ��������ַ�

��������:
��һ��Ӣ������Ե���Ϊ��λ�����ŷš�

�������:
�õ�����ľ���*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1001]= {0};
    char b[1001]= {0};
    gets(a);
    int len=strlen(a);

    int x=len-1;
    int j=0;
    for(; x>=0; x--)
    {
        char c=a[x];
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            b[j]=c;
            j++;
        }
        else
        {
            j=0;
            int len1=strlen(b);
            int k=len1-1;
            for(; k>=0; k--)
            {
                printf("%c",b[k]);
            }
            printf(" ");
            memset(b,0x00,sizeof(b));
        }
    }
    int len1=strlen(b);
    int k=len1-1;
    for(; k>=0; k--)
    {
        printf("%c",b[k]);
    }
    return 0;
}
