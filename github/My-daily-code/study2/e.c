#include<stdio.h>
//调用函数求i的阶乘之和
long int jiecheng(long int x);

int main()
{
    long int i,result=0,x;
    scanf("%lu",&x);

    for(i=1;i<=x;i++)
    {
        result+=jiecheng(i);
    }
    printf("%lu",result);
    return 0;
}

long int jiecheng(long int x)
{

    long int result = 1;
    for (;x>1;x--)
    {
        result *= x;
    }
    return result;
}
