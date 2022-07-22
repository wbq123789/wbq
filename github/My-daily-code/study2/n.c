#include <stdio.h>
//给定n本书的名称和定价，本题要求编写程序，查找并输出其中定价最高和最低的书的名称和定价
 struct book
    {
        char name[30];
        double price;
    };
int main()
{
    int n;
    int i=0,j=0;
    scanf("%d",&n);
    struct book shu[11];
    for(i=0;i<n;i++)
    {
        scanf("\n");
        gets(shu[i].name);
        scanf("%lf",&shu[i].price);
    }
    for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (shu[j].price > shu[j + 1].price) {
				shu[10] = shu[j];
				shu[j] = shu[j + 1];
				shu[j + 1] = shu[10];
			}
		}
	}
    printf("%.2f,%s\n",shu[n-1].price,shu[n-1].name);
    printf("%.2f,%s\n",shu[0].price,shu[0].name);
    return 0;
}