#include "stdio.h"
//#include "unistd.h"
int main()
{
	int m=1;
	int *p=&m;
	int *q;
	q=p;
	*q=2;
	printf("%p %d",p,m);
	return 0;
}