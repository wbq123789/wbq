//简单的四则运算
#include <stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    switch(c)
    {
    case'+':
        printf("%d",a+b);
        break;
    case'-':
        printf("%d",a-b);
        break;
    case'*':
        printf("%d",a*b);
        break;
    case'/':
        if (b!=0.0)  //分母不能为0
            printf("%d",a/b);
        else
            printf("Error0");
        break;
    default:
        printf("Error1");
        break;
    }
    return 0;
}