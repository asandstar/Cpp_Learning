/*
题目内容：编写一个C程序，实现两个分数的加减法。
输入格式：每行数据是一个字符串，格式是“a/b+c/d”或“a/b-c/d”。
其中a, b, c, d是一个0-9的整数。b、d不为0。输入数据保证合法。
输出格式：对于输入数据的每一行输出两个分数的运算结果。
注意结果应符合书写习惯，没有多余的符号、分子、分母，并且化简至最简分数。
例如：“1/4-1/2”的结果是-1/4，“1/3-1/3”的结果是0。
输入样例：1/8+3/8
输出样例：1/2
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    //两种输入形式并通分
    int a, b, c, d, nume, deno, r, s = 1;
    char pm;
    scanf("%d/%d%c%d/%d", &a, &b, &pm, &c, &d);
    if (pm == '+')
        nume = a * d + b * c;
    else if (pm == '-')
        nume = a * d - b * c;
    deno = b * d;

    //化简通分后的分数并根据情况输出整数（包含0）和分数
    if (nume != 0)
    {
        //剔除符号再化简分数
        if (nume < 0)
            s = -1, nume = -nume;
        int m = nume;
        int n = deno;
        //求分子分母最大公约数m并让分子分母除以m
        while (n != 0)
            r = m % n, m = n, n = r;
        if (m != 0)
            nume = s * nume / m, deno = deno / m;
        if (nume % deno != 0)
            printf("%d/%d", nume, deno);
        else
            printf("%d", nume / deno);
    }
    else
        printf("%d", nume);
}
