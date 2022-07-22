#include "stdio.h"
//打印沙漏
//自定义字符
void print(char a,int k);
int main(void)
{
    char a;
    int high;
    int k;
    printf("请输入符:\n");
    scanf("%c",&a);
    printf("请输入沙漏高度:\n(注意:沙漏高度应为奇数)\n");
    scanf("%d",&high);
    k=(high/2)+1;
    print(a,k);
    return 0;
}
void print(char a,int k)
{
    int i,j;
    for(i=0;i<k;i++)
    {
        for(j=0;j<i;j++)
        {
        printf(" ");
        }
        for(j=0;j<k-i;j++)
        {
        printf(" %c",a);
        }
        printf("\n");
    }
    for(i=k-1;i>0;i--)
    {
        for(j=0;j<i-1;j++)
        {
        printf(" ");
        }
        for(j=0;j<k-i+1;j++)
        {
        printf(" %c",a);
        }
        printf("\n");
    }
}