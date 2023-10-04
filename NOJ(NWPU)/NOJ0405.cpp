/*
题目内容：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的。
加密函数如下：每位数字都加上5，然后用除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
输入格式：输入整型
输出格式：输出整型
输入样例：1998
输出样例：3446
*/
#include <iostream>
using namespace std;
void change(int &m, int &n)
{
    int t;
    t = m;
    m = n;
    n = t;
}
int secret(int x)
{
    int a, b, c, d;
    a = x / 1000;
    b = x % 1000 / 100;
    c = x % 100 / 10;
    d = x % 10;
    a = (a + 5) % 10;
    b = (b + 5) % 10;
    c = (c + 5) % 10;
    d = (d + 5) % 10;
    change(a, d);
    change(b, c);
    cout << a << b << c << d;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    secret(n);
}
