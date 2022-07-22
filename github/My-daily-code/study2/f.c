#include "stdio.h"
int board[3][3];
int i,j;
//二维数组判断井字棋输赢
int judgeboardranks1(void);
int judgeboardranks2(void);
int judgeboardranks3(void);

int main ()
{
    int winner;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&board[i][j]);
        }
    }
    if     (judgeboardranks1()==1)
        {printf("winner is X");}
    else if(judgeboardranks1()==2)
        {printf("winner is O");}
    else if(judgeboardranks2()==1)
        {printf("winner is X");}
    else if(judgeboardranks2()==2)
        {printf("winner is O");}
    else if(judgeboardranks3()==1)
        {printf("winner is X");}
    else if(judgeboardranks3()==2)
        {printf("winner is O");}
    else printf("no winner !");
    return 0;
}

int judgeboardranks1(void)
{
    int x=0,o=0,back=0,num=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int a,b;
            out:
            if(num==0)//实现行列式i，j互化；
            {
                a=i,b=j;
            }
            else
            {
                a=j,b=i;
            }
            if(board[a][b])
            {
                x++;
            }
            else o++;
        if(x==3)
        {
            back=1;
            goto exit1;
        }
        if(o==3)
        {
            back=2;
            goto exit2;
        }
        }
        x=0,o=0;//计数器重置
        
    }
    exit1:
    exit2:
    if(num==0)
    {
        if(back==0)
        {
           num++;
           goto out;//返回初始位置以实现i，j互化；
        }

    }
    return back;

}

int judgeboardranks2(void)
{
    int x=0,o=0,back=0;
    for(i=0;i<3;i++)
    {
        if(board[i][i]) {x++;}
        else {o++;}
    }
    if(x==3) {back=1;}
    if(o==3) {back=2;}
    return back;
}

int judgeboardranks3(void)
{
    int x=0,o=0,back=0;
    for(i=0;i<3;i++)
    {
        if(board[i][2-i]) {x++;}
        else {o++;}
    }
    if(x==3) {back=1;}
    if(o==3) {back=2;}
    return back;
}