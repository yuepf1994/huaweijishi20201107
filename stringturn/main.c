/*题目描述
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）

输入描述:
输入N个字符

输出描述:
输出该字符串反转后的字符串*/
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
