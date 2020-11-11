/*题目描述
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
例如，对于字符串abaca而言，有a、b、c三种不同的字符，因此输出3。
输入描述:
输入N个字符，字符在ACSII码范围内。

输出描述:
输出范围在(0~127)字符的个数。*/
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
