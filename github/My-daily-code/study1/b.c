#include"stdio.h"
//求平均数
int main ()
{
    int sum=0;
    int num=0;
    int date=0;
    double average=0;
    scanf("%d", &date);
    while(date!=0)
    {
        sum+=date;
        num++;
        scanf("%d",&date);
    }
    average=1.0*sum/num;
    printf("average = %.2f",average);
return 0;
}
