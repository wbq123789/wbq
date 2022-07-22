#include "stdio.h"
//旋转数组
void rotate(int* nums, int numsSize, int k);
void ArrayShift( int a[], int n, int m );
int main()
{
    int numsSize;
    int k=0;
    scanf("%d",&numsSize);
    scanf("%d",&k);
    int a[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        scanf("%d",&a[i]);
    }
    //2选1
    rotate(a,numsSize,k);//多次反转法
    //ArrayShift(a[],numsSize,k);//临时数组法
    for(int i=0;i<numsSize;i++)
    {
        printf("%d,",a[i]);
    }
    return 0;
}
//多次反转法:先反转全部数组，再反转前k个，最后再反转剩余的
void rotate(int* nums, int numsSize, int k)
{
    int i=0,j=0;
    int mid=0;
    for(;i<numsSize/2;++i)
    {
        mid=nums[i];
        nums[i]=nums[numsSize-i-1];
        nums[numsSize-i-1]=mid;
    }
    for(i=0;i<k/2;++i)
    {
        mid=nums[i];
        nums[i]=nums[k-i-1];
        nums[k-i-1]=mid; 
    }
    for(i=0,j=k;i<(numsSize-k)/2;++i,++j)
    {
        mid=nums[j];
        nums[j]=nums[numsSize-i-1];
        nums[numsSize-i-1]=mid; 
    }
}
//临时数组法
void ArrayShift( int a[], int n, int m )
{
    int i=0;
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=0;
    }
    if(m<n)
    {
        for(i=0;i<n;i++)
        {
            if(i+m<n)
            {
                b[i+m]=a[i];
            }
            else
            {
                b[i+m-n]=a[i];
            }
        }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    }
    else if(m>n)
    {
        while(m>n)
        {
            m-=n;
        }
        for(i=0;i<n;i++)
        {
            if(i+m<n)
            {
                b[i+m]=a[i];
            }
            else
            {
                b[i+m-n]=a[i];
            }
        }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    }
}