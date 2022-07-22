#include "stdio.h"
//函数搜索数组中元素
//二分法查找
int search(int input,int a[],int number);
int main()
{
int number;
printf("请输入带查找数组大小\n");
scanf("%d",&number);
int a[number];
printf("请输入带查找数组\n");
for(int i=0;i<number;i++)
{
    scanf("%d",&a[i]);
}
int input;
printf("请输入带查找数字\n");
scanf("%d",&input);
int r=search(input,a,number);
if(r!=-1)
{
    printf("%d存在于数组中的第%d位",input,r+1);
}
else
{
    printf("%d不存在于数组中",input);
}
return 0;
}
//原始方法
/*
int search(int input,int a[],int number)
{
    int ret=-1;
    for(int j=0;j<number;j++)
    {
        if(a[j]==input)
        {
            ret=j;
            break;
        }
    }
    return ret;
}
*/
//二分法查找

int search(int input,int a[],int number)
{
    int ret=-1;
    int left,right,mid;
    left=0,right=number-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==input)
        {
            ret=mid;
            break;
        }
        else if(a[mid]<input)
        {
            left=mid+1;
            continue;
        }
        else
        {
            right=mid-1;
            continue;
        }
    }
    return ret;
}