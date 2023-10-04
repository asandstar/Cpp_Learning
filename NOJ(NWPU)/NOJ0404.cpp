/*
题目内容：已知ack函数对于m≥0和n≥0有定义：ack(0,n)=n+1、ack(m,0)=ack(m-1,1)、ack(m,n)=ack(m-1,ack(m,n-1))。输入m和n，求解ack函数。
输入格式：输入m和n，均为整型，用空格隔开。
输出格式：输出为整型
输入样例：3 2
输出样例：29
*/
#include <iostream>
using namespace std;
int ack(int m, int n)
{
    if (m == 0 && n >= 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return ack(m - 1, 1);
    else
        return ack(m - 1, ack(m, n - 1));
    return 0;
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << ack(m, n);
    return 0;
}
