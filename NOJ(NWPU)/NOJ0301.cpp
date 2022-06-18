#include <iostream>
using namespace std;
int per(int n = 0)
{
    int sum, i, j, m;
    sum = 0;
    //求和
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = i + sum;
            if (sum == n && sum != 24)
            {
                cout << sum << '=';
            }
        }
    }
    //输出
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0 && i != n / 2 && sum == n)
        {
            cout << i << '+';
        }
    }
    if (sum == n)
        cout << sum / 2 << endl;

    return 0;
}
int main()
{
    int n, num, q;

    cin >> num;
    for (q = 6; q <= num; q++)
        per(q);
    return 0;
}
/*题目内容：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。请编写程序，找出1-n之内的所有完数。
输入格式：输入整数n的值
输出格式：每行按格式输出其因子，例：6=1+2+3
输入样例：
1000
输出样例：
6=1+2+3
28=1+2+4+7+14
496=1+2+4+8+16+31+62+124+248
*/