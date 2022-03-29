#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   /*
    //数据类型自动转换：不同数据类型之间相容，可以相互赋值
    int d;
    int a = 11.34;//a=11
    int b = 30;
    double d = b;//d=30.0
    printf("%d, %d", a, d);
    //字符型变整型
    int k = 'a';
    printf("%d", k);//97
    //整型变字符型，留最右边一字节（0~7）
    int n = 98;
    char f = n;
    printf("%c", f);//b
    //一个失败的尝试
*/

    int n1 = 1378;
    short n2;
    char c = 'a';
    double d1 = 7.809;
    double d2;
    n2 = c+1;
    printf("c = %c, n2 = %d\n", c, n2);//n2:'a'的ASCII码+1
    c = n1;
    printf("c = %c, n1 = %d\n", c, n1);//n1的值变成ASCII码赋给c,字符改变
    n1 = d1;
    printf("n1 = %d\n", n1);//浮点型赋给整型，丢掉小数
    d2 = n1;
    printf("d2 = %f\n", d2);//整型赋给浮点型，出现小数
    
    printf("\n123\t456\nabc\n");
    printf("123\'45\n");
    printf("UVWX\"YZ\n");

    return 0;
}
//字符型常量和变量都占一个字节，内部存放的是字符的ASCII编码
//ASCII编码是一个0~255的整数
/*
'0'~'9':48~57
'A'~'Z':65~90
'a'~'z':97~122
"a"字符串 不可用char
'a'字符 char

*/