#include "stdio.h"
//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。
//找出那个只出现了一次的元素。
int singleNumber(int* nums, int numsSize);
int main()
{
    int a[]={4,1,2,1,2};
    int r;
    r=singleNumber(a,5);
    printf("%d",r);
    return 0;
}
//位运算：异或（相同的异或结果为0，不同的异或结果为1）
int singleNumber(int* nums, int numsSize)
{
    int ret=0;
    for(int i=0;i<numsSize;i++)
    {
        ret^=nums[i];
    }
    return ret;
}