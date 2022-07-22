//判断是否为素数
/*
#include "stdio.h"
int main()
{
    int x=0,y,z=0;
    scanf("%d",&x);
    for( y=2;y<x ;y++ )
    {
        if(x%y==0)
        {
            z=1;
            break;
        }     
    }
    if(z==1)
    printf("不是素数");
    else
    printf("是素数");

    return 0;
}
*/
//进阶方法
//方法一：减少判断循环数
/*
#include "stdio.h"
#include "math.h"
int isprime(int);
int main()
{
    int num,i,j;
    scanf("%d",&num);
    j=1000; //j表示存储素数的最大值
    int prime[j];
    int count=0;
    for(i=0;i<j;i++)
    {prime[i]=0;}//数组初始化
    for(i=0;i<num;i++)
    {
        if(isprime(i))
        {
            prime[count++]=i;//将
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%d\n",prime[i]);
    }
    printf("count=%d",count);
    return 0;
}

int isprime(int i)  //函数判断素数
{
    int x,y,j=0;
    int result=1;
    if(i==0||(i%2==0&&i!=2))
        {
            result=0;
        }
    for(x=3;x<sqrt(i);x+=2)
    {
        if(i%x==0)
        {
            result=0;
            break;
        }
    }
    return result;
}
*/

//方法二：构造素数表，通过比较数与素数表来判断素数

#include "stdio.h"

int prime(int i,int isprime[],int count);
int main()
{
    int isprime[1000]={2};//构造素数表
    int input,count=1,i;
    scanf("%d",&input);
    for(i=3;i<input;i++)
    {
        if(prime(i,isprime,count)) {isprime[count++]=i;}
    }
    for(i=0;i<count;i++)
    {
        printf("%d\n",isprime[i]);
    }
    printf("count=%d",count);
    return 0;
}

int prime(int i,int isprime[],int count)//函数判断素数
{
    int j;
    int output=1;
    for(j=0;j<count;j++)
    {
        if(i%isprime[j]==0)
        {
            output=0;
            break;
        }
    }
    return output;
}
