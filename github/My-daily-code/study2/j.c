#include "stdio.h"
//函数实现删除数组中的重复元素（不改变元素位置）
int count(int *a,int n);

int main()
{
    int n;
    int i;
    int thelastnumber;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {a[i]=0;}
    for(i=0;i<n;i++) {scanf("%d",&a[i]);}
    thelastnumber=count(a,n);
    for(i=0;i<thelastnumber;i++) {printf("%d",a[i]);}//输出改动后的元素
    return 0;
}
//双重循环遍历
/* int count(int *a,int *n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<(n-1);k++)
                {
                    a[k]=a[k+1];
                }
                --n;
                --j;
            }
        }
    }
    return n;
} */
////双指针方法删除数组中重复值
//++i效率上优于i++(汇编4行/3行)
int count(int *a,int n)
{
    int *nums;
    nums=a;
    int numsSize=n;
    int i=1;
    int j=1;
    int count;
    if(numsSize>0)
    {
        for(;j<numsSize;++j)
        {
            if(nums[j-1]!=nums[j])
            {
                nums[i]=nums[j];
                ++i;
            }
        }
        count=i;
        return count;
    }
    else
    return numsSize;
}