#include "stdio.h"
/*
编程输入一个4位正整数，验证6174黑洞问题，按要求输出其运算过程。
6174是一个著名的常数，由印度数学家卡布列克提出。
卡布列克发现：任何非四位相同的四位正整数，只要将数字重新排列，组合成最大的数和最小的数再相减，重复以上步骤，7次以内就会出现6174。
*/
int main()
{
    int n,i=0,j=0,mid=0;
    int result1=0,result2=0,result3=0;
    scanf("%d",&n);
    int a[4],b[5];
    out:
    result1=0,result2=0,result3=0;//result1:最小;result2:最大;result3:结果;
    for(i=0;i<5;i++){b[i]=0;}
    for(i=0;i<4;i++){a[i]=n%10;mid=n/10;n=mid;}
    b[0]=a[0];
    for(i=1;i<4;i++)
    {
       for(j=i-1;j>=0;j--)
        {
            if(a[i]<b[j])
            b[j+1]=b[j];
            else break;
        }
        b[j+1]=a[i];    
    }
    for(i=0;i<4;i++)
    {
        result1*=10;
        result1+=b[i];
    }
    for(i=3;i>=0;i--)
    {
        result2*=10;
        result2+=b[i];
    }
    result3=result2-result1;
    printf("%d-%d=%d",result2,result1,result3);
    if(result3!=6174)
    {
        printf("\n");
        n=result3;
        goto out;
    }
    return 0;
}