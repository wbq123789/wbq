/*#include "stdio.h"
int main()
{
    int x;
    scanf("%d", &x);
    int i=x;
    int result = 1;
    for (x = x;x>1;x--)
    {
        result *= x;
    }
    printf("%d!=%d", i, result);
    return 0;
}//i的阶乘
*/
#include "stdio.h"
//求S=1！+2！+3！+4！+n！
int main()
{
    int x,s=0;
    int result;
    scanf("%d", &x);
    int i=x;
    while(i>=1)
    {
        x=i;
        result=1;
        for (;x>1;x--)
        {
            result *= x;
        }
        i--;
        s+=result;
    }
    printf("%d",s);
    return 0;
}