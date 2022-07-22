#include "stdio.h"
char fun(char ch);
int main(){
    char *p,pw[28];gets(pw); p=pw;
    while(*p)
     {*p=fun(*p); p++;}
    puts(pw);
    return 0;
}
/*
一个函数，可实现对密码的简单加密，一种对称加密方案如下（即将指定的字符转换成其它的字符）：
1）小写字母正数第一与倒数第一相互对应，正数第二与倒数第二相互对应……（a--z,b--y,c--x,....)。
2）大写字母，整个字母表分前后两组，两组的第一与第一相互对应，第二与第二相互对应……(A--N,B--O,C--P,D--Q...)。
3）数字字母，两两一组相互对应(0--1,2--3,4--5,6--7,8--9)。4）其它字符不作转换
*/
    char fun(char ch)
{
    int a;
    scanf("%c", &ch);
    a=ch;
        switch(a)
        {
                case 48:printf("1");break;
                case 49:printf("0");break;
                case 50:printf("3");break;
                case 51:printf("2");break;
                case 52:printf("5");break;
                case 53:printf("4");break;
                case 54:printf("7");break;
                case 55:printf("6");break;
                case 56:printf("9");break;
                case 57:printf("8");break;
                case 97:printf("z");break;
                case 98:printf("y");break;
                case 99:printf("x");break;
                case 100:printf("w");break;
                case 101:printf("v");break;
                case 102:printf("u");break;
                case 103:printf("t");break;
                case 104:printf("s");break;
                case 105:printf("r");break;
                case 106:printf("q");break;
                case 107:printf("p");break;
                case 108:printf("o");break;
                case 109:printf("n");break;
                case 110:printf("m");break;
                case 111:printf("l");break;
                case 112:printf("k");break;
                case 113:printf("j");break;
                case 114:printf("i");break;
                case 115:printf("h");break;
                case 116:printf("g");break;
                case 117:printf("f");break;
                case 118:printf("e");break;
                case 119:printf("d");break;
                case 120:printf("c");break;
                case 121:printf("b");break;
                case 122:printf("a");break;
                case 65:printf("N");break;
                case 66:printf("O");break;
                case 67:printf("P");break;
                case 68:printf("Q");break;
                case 69:printf("R");break;
                case 70:printf("S");break;
                case 71:printf("T");break;
                case 72:printf("U");break;
                case 73:printf("V");break;
                case 74:printf("W");break;
                case 75:printf("X");break;
                case 76:printf("Y");break;
                case 77:printf("Z");break;
                case 78:printf("A");break;
                case 79:printf("B");break;
                case 80:printf("C");break;
                case 81:printf("D");break;
                case 82:printf("E");break;
                case 83:printf("F");break;
                case 84:printf("G");break;
                case 85:printf("H");break;
                case 86:printf("I");break;
                case 87:printf("J");break;
                case 88:printf("K");break;
                case 89:printf("L");break;
                case 90:printf("M");break;
            default:printf("%c",ch);
        }
    
    return 0;

}
