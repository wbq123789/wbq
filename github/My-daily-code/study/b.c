/*
#include <stdio.h>
int main()
{
    int a,b;
    int a1,b1;
    int a2,b2;
    printf("请输入开始时间与结束时间\n");
    scanf("%d,%d", &a1, &b1); 
    scanf("%d,%d", &a2, &b2);
    a = a2 - a1;
    b = b2 - b1;
    if(b2-b1<0)
        {b=b+60;
         a--;
        }
        printf("时间差为%d小时,%d分钟\n", a, b);
        return 0;
}
*/
#include <stdio.h>
//计算时间差
int main()
{
    int a,b;
    int a1,a2,a3;
    int b1,b2,b3;
    scanf("%d %d",&a,&b); 
    a1=a/100;
    b1=b/100;
    a2=a-a1*100;
    b2=b-b1*100;
    a3=b1-a1;
    b3=b2-a2;
    if(b3<0)
        {b3=b3+60;
         a3--;
        }
    if(a3<10)
        {
        if(b3<10)
        printf("0%d:0%d",a3,b3);
        else
            printf("0%d:%d",a3,b3);
        }
    else if(b3<10)
        printf("%d:0%d",a3,b3);
        else
            printf("%d:%d",a3,b3);
        return 0;
}