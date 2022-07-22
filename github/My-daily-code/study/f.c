#include<stdio.h>
#include<stdbool.h>
//bool值判断大小
int main()
{
   int a, b;
   scanf("%d %d", &a, &b);
   bool c=a<b;
   if(c<0)
   {
       printf("%d gt %d",a,b); //大于"greater than
   }
   else
   {
       printf("%d gt %d",b,a);
   }
   return 0;
}

