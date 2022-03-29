#include<iostream>
#include<cstdio>
int main()
{
    int a,b,c;
    a = 1;
    printf("%d\n", a);
    a = a + 1;
    printf("%d\n", a);
    a = 4 + a;
    printf("%d\n", a);
    b = 78;
    a += b;//比a = a + b速度更快
    c = a;
    printf("%d %d %d", a, b, c);
    return 0;
}
//a+b、a-b、a*b这三个表达式的值，就是a和b做算术运算的结果。
//表达式的值的类型，以操作数中精度高的类型为准。
/*精度：
double > long long > int > short > char
2 * 0.5 => 1.0*/
