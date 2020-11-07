/*输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
输入描述:
输入一个int型整数

输出描述:
按照从右向左的阅读顺序，返回一个不含重复数字的新的整数*/
#include <stdio.h>

#include <stdlib.h>
#include <math.h>

int intpow(int x, int y )
{
    int res=1;
    int i=0;
    if(x==0)
        return 0;
    if(y==0)
        return 1;
    else
    {
        for(; i<y; i++)
        {
            res*=x;
        }
    }
    return res;
}

int main()
{
    int a=0;
    int b[11]= {0};
    scanf("%d",&a);

    //printf("[%d]",(int )(a*100.00));

    int x=0;
    int o=0;
    if(a<10)
    {
        printf("%d",a);
        return 0;
    }
    else
    {
        while(a>=intpow(10,x))
        {
            int y=0;
            y=(a/(int)intpow(10,x))%10;
            //printf("%d %d\n ",y,x);
            if(b[y]==0)
            {
                b[y]=o+1;
                o++;
            }
            x++;
        }
    }
    int t=0;
    int sum=0;
    for(; t<10; t++)
    {
        if(b[t]>0)
        {
            //printf("%d %d \n",b[t]-1,t);
            //printf("%d  %d \n",intpow(10,b[t]-1),t);
            //printf("%d \n",(int)(t*intpow(10,b[t]-1)));
            sum+=t*intpow(10,o-b[t]);
        }
    }
    printf("%ld",sum);
    return 0;
}
