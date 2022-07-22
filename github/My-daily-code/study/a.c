#include "stdio.h"
//学生成绩百分制转五分制
int main()
{
    int x,y;
    int a=0,b=0,c=0,d=0,e=0,z=1;
    int score;
    scanf("%d",y);
    scanf("%d",score);
    a=score/10;
    while(z<=y)
    {
        switch(x)
    {
        case 10:case 9:a++;break;
        case 8:b++;break;
        case 7:c++;break;
        case 6:d++;break;
        case 5:case 4:case 3:case 2:case 1:case 0:e++;break;
    } 
     z++;
    }
    printf("%d %d %d %d %d",a,b,c,d,e);
    return 0;
}