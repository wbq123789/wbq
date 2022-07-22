#include "stdio.h"
#include "stdlib.h"
//以数组形式返回两数组的交集。返回结果中每个元素出现的次数，应与元素在两个数组中都出现的次数一致（如果出现次数不一致，则考虑取较小值）。
int **intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize,int *reet);
int main()
{
    int nums1Size,nums2Size;
    scanf("%d",&nums1Size);
    scanf("%d",&nums2Size);
    int nums1[nums1Size];
    int nums2[nums2Size];
    for(int i=0;i<nums1Size;i++)
    {
        scanf("%d",&nums1[i]);
    }
    for(int j=0;j<nums2Size;j++)
    {
        scanf("%d",&nums2[j]);
    }
    int haxi[1001]={0};
    int ret=0;
    int *rett=(int *)malloc(sizeof(int)*(nums1Size>nums2Size?nums1Size:nums2Size));
    int i;
    for(i=0;i<nums1Size;++i)
    {
        ++haxi[nums1[i]];
    }
    for(i=0;i<nums2Size;++i)
    {
        if(haxi[nums2[i]]>0)
        {
            rett[ret++]=nums2[i];
            --haxi[nums2[i]];
        }
    }
    for(int k=0;k<ret;k++)
    {
        printf("%d",rett[k]);
        if(k!=ret-1)
        {
            printf(",");
        }
    }
    free(rett);
    return 0;
}