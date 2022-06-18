#include <iostream>
using namespace std;
int isprime(int num)
{
    for (int j = 2; j < num - 1; j++)
        if (num % j == 0)
            return 0;
    return 1;
}
int main()
{
    int m, n, i, t;
    cin >> m >> n;
    if (m > n)
    {
        t = m;
        m = n;
        n = t;
    }
    for (i = m; i <= n; i++)
    {
        if (isprime(i) == 1)
            cout << i << ' ';
    }
    return 0;
}
/*我认为我做得没错，还是有一个例子报错，很难过*/
/*
题目内容：编写程序，求任意两个整数之间所有的素数。
输入格式：输入两个整数，用空格间隔。注意输入的两个整数谁大谁小是任意的。
输出格式：输出数据占一行，用空格间隔。
输入样例：
100 130
输出样例：
101 103 107 109 113 127
*/