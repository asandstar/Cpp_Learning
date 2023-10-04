/*
题目内容：编写程序验证下列结论：任何一个自然数n的立方都等于n个连续奇数之和。
输入格式：输入自然数n（n为整数）
输出格式：输出n及n个连续奇数之和
输入样例：5
输出样例：5*5*5=125=21+23+25+27+29
草稿
j j+2 4 6 8 j+10 ^ j+2(n-1)
sum = n * j + 2 + 4 + 6 +
n
1 2 3 4 5 6
n=6
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, odd, cube, f;
    cin >> n;
    cube = n * n * n;
    cout << n << '*' << n << '*' << n << '=' << cube;

    for (j = 1; j < cube; j = j + 2)
        if (((n - 1 + j) * n) == cube)
        {
            cout << '=';
            odd = j;
        }

    for (i = 0; i < n - 1; i++)
        cout << odd + 2 * i << '+';
    cout << odd + (n - 1) * 2;
    return 0;
}

