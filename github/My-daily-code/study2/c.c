#include <stdio.h>
//求n个分数的和
//输入第一行给出一个正整数N（≤100）。
//随后一行按格式a1/b1 a2/b2 ...给出N个有理数。
//要求所有分子和分母都在长整型范围内。
//另外，负数的符号一定出现在分子前面。
int main()
{
	int n,i;
	long long int a,b,c,d,m1,m2,p;
	scanf("%d",&n);
	scanf("%lld/%lld",&a,&b);
	while(--n)
	{
		scanf("%lld/%lld",&c,&d);
		m1=a*d+b*c;
		m2=b*d;
		if(m1>m2) 
        p=m2;
		else 
        p=m1;
		if(p<0) 
        p=-p;
		for(i=p;i>=1;i--)
		{
			if(m1%i==0&&m2%i==0)
			{
			  a=m1/i;
		    b=m2/i;
		    break;
			} 
		}
		if(i<1)
		{
			a=m1;
			b=m2;
		}
	}
	if(a>b) p=b;
	else p=a;
	for(i=p;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			a=a/i;
			b=b/i;
		}
	}
	if(a%b==0) 
    printf("%lld",a/b);
	else if(a/b==0&&a!=0&&b!=0) 
    printf("%lld/%lld",a%b,b);
	else 
    printf("%lld %lld/%lld",a/b,a%b,b);
    return 0;
 } 


