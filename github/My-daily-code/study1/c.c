#include "stdio.h"
#include "stdlib.h"
#include "time.h"
//猜数游戏
int main ()
{
    int a=0,b=0,c=0;
    srand(time(0));
    a=rand()%100;
    do{
        printf("请输入一个100以内的数\n");
        scanf("%d",&b);
        c++;
        if(a==b)
        printf("恭喜你，猜中了！\n");
        if(a>b)
        printf("你猜的数小了\n");
        if(a<b)
        printf("你猜的数大了\n");
    }
    while(a!=b);
    printf("你一共用了%d次才猜中\n",c);
    return 0;
}
/*
#include "stdio.h"
//假随机数
//输入第一行中给出两个不超过100的正整数，分别是游戏机产生的随机数、以及猜测的最大次数N。最后每行给出一个用户的输入，直到出现负数为止。

int main ()
{
    int a=0,b=0,c=0,d=0;
    scanf("%d %d", &a, &d);
    do{
        scanf("%d",&b);
        c++;
        if(c>d)
            {printf("Game Over");
             break;
            }
        if(b<0)
            {printf("Game Over");
             break;
            }
        if(a==b)
        {
            if(c==1)
                printf("Bingo!");
            if(c>=2&&c<=3)
                printf("Lucky You!");
            if(c>3&&c<=d)
                printf("Good Guess!");
        }
        if(a>b)
        printf("Too small\n");
        if(a<b)
        printf("Too big\n");
    }
    while(a!=b);
    return 0;
}
*/