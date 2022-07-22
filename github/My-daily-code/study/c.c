#include <stdio.h>
int main()
//字符转换ASCII码
{
    char c;
    printf("输入一个字符: ");
    scanf("%c", &c);  
    
    // %d 显示整数
    // %c 显示对应字符
    printf("%c 的 ASCII 为 %d", c, c);
    return 0;
}
/*另一种方法
char x;
int y;
y=x;
实现由字符转"ASCII"
*/
