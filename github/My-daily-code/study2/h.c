#include "stdio.h"
//结构体定义方法，使用方法
int main()
{
    struct studentmessege{
        char name[20];
        int age;
        int grade;
    };
    struct studentmessege student;
    scanf("%c",&student.name);
    scanf("%d",&student.age);
    scanf("%d",&student.grade);
    
    return 0;
}