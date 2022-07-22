#include <stdio.h>
//斐波那契数列求和（兔子繁衍问题）
int main () {
	int n, prev = 0, start = 1, end = 0, cnt = 1;
	scanf("%d", &n);
	if ( n == start )
		printf("%d", cnt);
	else {
		end = prev + start;
		++cnt;
		while ( end < n ) {
			prev = start;
			start = end;
			end = prev + start;
			++cnt;
		}
		printf("%d", cnt);
	}
	return 0;
}

