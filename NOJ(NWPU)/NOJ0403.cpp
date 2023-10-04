/*
题目内容：已知f(x)=1/(1+x*x)，编写函数用梯形法计算f(x)在区间[a,b]的积分。
输入格式：输入a和b，a＜b，均为double型
输出格式：输出为double型
输入样例：0.5 1
输出样例：0.321751
*/
#include <iostream>
#include <cmath>
using namespace std;
double integral(double a, double b, double (*f)(double x))
{
    int n = 1000, i;
    double h, x, s = 0.0;
    h = (b - a) / n;
    for (i = 1; i <= n; i++)
    {
        x = a + (i - 1) * h;               //移动x不断积分
        s = s + (f(x) + f(x + h)) * h / 2; //求小矩形面积
    }
    return s;
}
double f(double x)
{
    return 1 / (1 + x * x);
}
int main()
{
    double a, b, t;
    cin >> a >> b;
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }

    cout << integral(a, b, f);
}
