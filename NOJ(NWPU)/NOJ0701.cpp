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
