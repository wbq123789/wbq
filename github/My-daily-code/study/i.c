#include "stdio.h"
//判断3个数的大小  
int main()
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    if (x>y)
    {
        if(x>z)
            {
            if(y>z)
            printf("%d->%d->%d",z,y,x);
            else
            printf("%d->%d->%d",y,z,x);
            }
        else
            printf("%d->%d->%d",y,x,z);
    }
    if (x<y)
    {
        if(y>z)
            {
            if(x>z)
            printf("%d->%d->%d",z,x,y);
            else
            printf("%d->%d->%d",x,z,y);
            }
        else
            printf("%d->%d->%d",x,y,z);
    }
    return 0;
}