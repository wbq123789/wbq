#include "stdio.h"
//判断闰年
int main()
{
    int year;
    scanf("%d",&year);
    if(year%100!=0&&year%4==0||year%400==0)
        printf("yes");
    else
        printf("no");
    return 0;
}