/*
题目内容：找出三个数据A，B，C中的最大数
输入格式：输入为整型，用空格分隔
输出格式：输出为整型
输入样例：
100 29 712
输出样例：
712
*/
#include <iostream>
using namespace std;
int max(int m, int n, int p)
{
    int big = -1;
    if (m > n)
        big = m;
    else
        big = n;
    if (p > big)
        big = p;

    return big;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, b, c);
    return 0;
}
