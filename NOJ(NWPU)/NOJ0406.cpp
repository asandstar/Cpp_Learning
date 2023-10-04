/*
题目内容：编写函数fceil(x)，返回大于等于x的最小整数，例如fceil(2.8)为3，fceil(-2.8)为-2。
输入格式：输入double型x。
输出格式：输出整型。
输入样例：2.8
输出样例：3
*/
#include <iostream>
using namespace std;
double fceil(double x)
{
    if (x <= 0)
    {
        x = (int)x;
        cout << x;
    }
    else
    {
        x = (int)x;
        cout << x + 1;
    }
    return 0;
}

int main()
{
    double n;
    cin >> n;
    fceil(n);
    return 0;
}
