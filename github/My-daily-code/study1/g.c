#include "stdio.h"
#include "math.h"

int main()
{
    double b;
    int x,y;
    scanf("%d",&x);
    b=0;
    do
    {
        y=pow(3,b);//以pow函数实现x的n次方
        printf("pow(3,%.0f) = %d\n",b,y);
        b++;
    }
    while(b<=x);
    return 0;
}