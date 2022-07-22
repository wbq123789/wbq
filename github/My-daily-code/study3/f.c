#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。

int main()
{
    int i=0;
    int n=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ret=0;
    for(i=n-1;i>=0;--i)
    {
        if(a[i]==9)
            a[i]=0;
        else
        {
            ++a[i];
            ret=n;
            break;
        }
    }
    if(ret==n)
    {
        for(i=0;i<n;i++)
        {printf("%d",a[i]);}
    }
    else
    {
    ret=n+1;
    int *rett=(int *)malloc(sizeof(int)*(n+1));
    memset(rett,0,sizeof(int)*(n+1));
    rett[0]=1;
    for(int i=0;i<ret;i++)
    {
        printf("%d",rett[i]);
    }
    free(rett);
    }
}