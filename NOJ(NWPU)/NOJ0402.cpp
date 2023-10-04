/*
题目内容：编写函数计算从n个元素中取m个元素的组合数C(m,n)。
输入格式：输入n和m为整型，用空格隔开。
输出格式：output	输出为整型。若无解输出wrong
输入样例：9 2
输出样例：36
*/
#include <iostream>
using namespace std;
int f(int n)
{
    if (n > 1)
        return f(n - 1) * n;
    return 1;
}
int main()
{
    int m, n, co;
    cin >> m >> n;
    co = f(m) / (f(n) * f(m - n));
    cout << co;
}
