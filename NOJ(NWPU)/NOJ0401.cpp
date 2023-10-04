/*
题目内容：用递归法将一个长整型数n逆序输出。例如输入483，输出384。n的位数不确定，可以是有效范围内的任意位数。
输入格式：输入为整数
输出格式：输出为整数
输入样例：4325879
输出样例：9785234
*/
#include <iostream>
using namespace std;
void re(long int m)
{
    if (m < 10)
        cout << m;
    else
    {
        cout << m % 10;
        return re(m / 10);
    }
}
int main(void)
{
    long int n;
    cin >> n;
    re(n);
}
