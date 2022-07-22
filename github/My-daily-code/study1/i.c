#include "stdio.h"
//辗转相除法求最大公约数
//goto 用法
int main ()
{
    int x,y,z;
    int max;

    scanf("%d %d",&x,&y);
    out:
    if(y==0){
        max=x;
    }
    else{
        z=x%y;
        x=y;
        y=z;
        goto out;
    }
    printf("%d",max);
    return 0;
}
//正常循环
/*
int main()
{
    int x,y,z;
    int max;
    scanf("%d %d",&x,&y);
    while(y!=0)
    {
        z=x%y;
        x=y;
        y=z;
    }
    max =x;
    printf("%d",max);
    return 0;
}
*/