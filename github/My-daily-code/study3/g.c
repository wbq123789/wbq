#include <stdio.h>
#include <time.h>
#include <math.h>
/*
*** 测试函数(一次)运行时间方法 time=(double)（start-stop）/CLOCK_PER_SEC(处理器时间);
*** 计算多项式的值：f(x)=a0x0+a1x1+...+an*xn
*/
clock_t  start,stop;
double duration;
void text(int n,double x);
void compute1(int i,double *a,double x);
void compute2(int i,double *a,double x);
int main()
{
    double x;
    scanf("%lf",&x);//输入x的值
    text(1,x);
    text(2,x);
    return 0;
}
void text(int n,double x)
{
    int i=9;
    double a[]={1,2,3,4,5,6,7,8,9};//给定多项式
    start=clock();
    if(n==1)
    {
        compute1(i,a,x);
    }
    if(n==2)
    {
        compute2(i,a,x);
    }
    stop=clock();
    duration=((double)(stop-start))/CLOCKS_PER_SEC;
    printf("%f\n",duration);
}
void compute1(int i,double a[],double x)//原始计算法
{
    double p=a[0];
    for(int j=1;j<i;j++)
    {
        p+=(a[j]*pow(x,j));
    }
}
void compute2(int i,double a[],double x)//秦九韶算法
{
    double p=a[i-1];
    for(int j=i;j>0;j--)
    {
        p=a[j-1]+x*p;
    }

}
//两个算法相差一个量级