/*题目描述
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符

输入描述:
将一个英文语句以单词为单位逆序排放。

输出描述:
得到逆序的句子*/
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
