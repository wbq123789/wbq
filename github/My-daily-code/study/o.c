#include "stdio.h"
//计算某年某月某日当天，是当年的第几天。
int main ()
{
    int year, month, day, a=0, b=0;
    scanf("%d %d %d",&year,&month,&day);
    switch(month)
        {
        case 12:a=335;break;
        case 11:a=305;break;
        case 10:a=274;break;
        case 9:a=224;break;
        case 8:a=213;break;
        case 7:a=182;break;
        case 6:a=152;break;
        case 5:a=121;break;
        case 4:a=91;break;
        case 3:a=60;break;
        case 2:a=31;break;
        case 1:a=day;break;
        default:break;
        }
    if(year%100!=0&&year%4==0||year%400==0)
    {
        if(month>2)
        a++;
    }
    
    if(a<=31)
        b=a;
    else
        b=a+day;
    printf("%04d-%02d-%02d:%d",year,month,day,b);
    return 0;
}