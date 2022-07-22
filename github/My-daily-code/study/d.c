#include"stdio.h"
//判断数据位数
int main()
{
    int x;
    int figure=0;//定义初始位数为0
    scanf("%d", &x);

/*  while语句
    if(x==0)
    {
        figure++;
    } 
    if(x>0)
    {
        while(x>0)
        {
            figure++;
            x /= 10;
        }
    }
*/

    if(x>=0)
    {
        do
        {
            x /= 10;
            figure++;
        }
        while (x > 0);
                    //do-while语句
    }
    else
    {
        x = -x;
        while(x>0)
        {
            figure++;
            x /= 10;
        }
    }
    printf("该数字为%d位数", figure);
    return 0;
}