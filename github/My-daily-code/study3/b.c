#include "stdio.h"
#include "string.h"
//简单学生信息管理（数组）
typedef struct student
{
    int ID[11];
    char name[20];
    int address[8];
} STU;
int change_student_message(STU *p);
int main()
{
    int x;
    printf("请输入学生人数：");
    scanf("%d",&x);
    STU student[100]={0,0,0},*p;
    int len = sizeof(student) / sizeof(STU);
    for(int i=0;i<x;i++)
    {
        printf("请输入第%d个学生的编号:\n",i+1);
        scanf("%d",student[i].ID);
        printf("请输入第%d个学生的姓名:\n",i+1);
        scanf("%s",student[i].name);
        printf("请输入第%d个学生的邮编:\n",i+1);
        scanf("%d",student[i].address);
    }
    c:
    printf("按1进入学生管理系统;按0结束程序。\n");
    int input;
    int ret=-1;
    A:
    scanf("%d",&input);
    if(input==1)
    {
    int i=0;
    int ret=-1;
    a:
    printf("更改学生信息请输入1;返回上级请输入0;\n");
    int x;
    scanf("%d",&x);
    if(x==0)
    {
    ret=-1;
    goto c;
    }
    else if(x==1)
    {
        ret=0;
        printf("按1输入学号查询;\n按2输入姓名查询;\n");
        int a;
        scanf("%d",&a);
        int ret1=-1;
        if(a==1)
        {
            printf("请输入需要改动的学生学号:");
            int xuehao[11]={0};
            int mum=-1;
            scanf("%d",xuehao);
            int i=0;
            for(i=0;i<x;i++)
            {
                if(xuehao[0]==student[i].ID[0])
                {
                    mum=i;
                    p=&student[mum];
                    break;
                }
            }
            if(mum!=-1)
            {
                ret1=change_student_message(p);
            }
            else
            {
                printf("输入学号有误！\n");
                ret=-1;
            }
        }
        else if(a==2)
        {
            printf("请输入需要改动的学生姓名:");
            char name[20]={0};
            scanf("%s",name);
            int i=0;
            int result=-1;
            int mum=-1;
            for(i=0;i<x;i++)
            {
                result=strcmp(name,student[i].name);
                if(result==0)
                {
                    mum=i;
                    p=&student[mum];
                    break;
                }
            }
            if(mum!=-1)
            {
                ret1=change_student_message(p);
            }
            else
            {
            printf("输入姓名有误！");
            ret=-1;
            }
    }
    else
    {
        printf("输入有误请重新输入!");
        goto a;
    }       
    if(ret1==0)
    {
        printf("学生信息改动完成！\n");
    }
    else
        printf("学生信息未改动！\n");
}  
    }         
    else if(input==0)
    {
        goto b;
    }
    else
        {
            printf("输入有误，请重新输入：\n");
            goto A;
        }
    b:
    for(int i=0;i<x;i++)
    {
        p=&student[i];
        printf("%d",*p->ID);
        printf("%s",p->name);
        printf("%d\n",*p->address);
    }
    return 0;
}
int change_student_message(STU *p)
{
    int b=0;
    printf("请选择需要改动的学生信息:\t1.学生学号\t2.学生姓名\t3.学生邮编\n");
    scanf("%d",&b);
    if(b==1)
    {
        printf("请输入学生学号:");
        scanf("%d",p->ID);
    }
    else if(b==2)
    {
        printf("请输入学生姓名:");
        scanf("%s",p->name);
    }
    else if(b==3)
    {
        printf("请输入学生邮编:");
        scanf("%d",p->address);
    }
    return 0;
}