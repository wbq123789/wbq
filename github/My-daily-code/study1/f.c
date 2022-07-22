#include "stdio.h"
//1000以内求最高位数
int main ()
{
    int x;
    scanf("%d",&x);
    int y=x;
    int z=0,a=0,b=0,c=1;
    while(y>=10)
    {
        y=x/10;
        z=y;
        a++;
        while(z>=10)
    {
        z=y/10;
        a++;
        y=z;
    }
    }
    switch(a)
    {
        case 0:break;
        case 1: z*=10;break;
        case 2: z*=100;break;
    }
    printf("%d",z);
return 0;
}