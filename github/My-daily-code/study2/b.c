/*
#include "stdio.h"
//冒泡排序
int main ()
{
    int n,y=0;
    int i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
		}
	}
    return 0;
}
*/
#include "stdio.h"
//插入排序
int main()
{
    int x,i,j;
    scanf("%d",&x);
    int a[x];
    int b[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    b[0]=a[0];
    for(i=1;i<x;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]<b[j])
            b[j+1]=b[j];
            else break;
        }
        b[j+1]=a[i];
    }
    for(i=0;i<x;i++)
    {
        printf("%d",a[i]);
        for(j=i;j<x-1;j++)
        {printf(",");break;}
    }
    printf("\n");
    for(i=0;i<x;i++)
    {
        printf("%d",b[i]);
        for(j=i;j<x-1;j++)
        {printf(",");break;}
    }
    return 0;
}