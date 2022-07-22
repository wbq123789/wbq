#include "stdio.h"
//数字的逆序输出
int nixv(int a);
int main ()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",nixv(n));
    return 0;
}
int nixv(int a)
{
    int b=a;
    int mid=0,result=0;
    int i=0,j=0,k=0;
    int x[100];
    for(i=0;i<100;i++) {x[i]=0;}
    i=0;
    while(b>0)
        {
        x[i]=b%10;
        mid=b/10;
        b=mid;
        i++;
        }
    while(j<i)
    {
        if(x[j]!=0)
        {
            result*=10;
            result+=x[j];
        }
        for(k=0;k<j;k++)
        {
        if((x[j]==0&&x[k]!=0))
            {
                result*=10;
                result+=x[j];
                break;
            }
        }
        j++;
    }
    return result;
}