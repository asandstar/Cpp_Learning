#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    double zi = 2, mu = 1, sum = 0;
    double t;
    for (i = 1; i <= n; i++)
    {

        double num = zi / mu;
        sum = num + sum;
        t = zi;
        zi = mu;
        mu = t;
        zi = mu + zi;
    }
    cout << fixed << setprecision(6) << sum;
}
/*
题目内容：有一个分数数列：2/1，3/2，5/3，8/5,13/8，21/13……。求这个数列的前n项之和。
输入格式：输入n的值
输出格式：输出保留小数点后6位小数
输入样例：20
输出样例：32.660261
*/