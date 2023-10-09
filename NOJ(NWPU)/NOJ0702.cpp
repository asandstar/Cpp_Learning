/*
题目内容：ACM队的POJer小C经常抱怨：“C语言中格式输出中有十六、十、八进制输出，
却没有二进制输出，哎，谁能帮我写一个程序实现输入一个十进制数n，输出它的二进制数呀？”你能帮帮他吗？
输入格式：输入数据n（0≤n≤1000010000）
输出格式：输出对应一个十进制数n的二进制数，注意：输出的二进制去掉任何一个多余的0。
输入样例：9
输出样例：1001
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, i, num;
    cin >> n;
    int *p = new int[100];
    i = 0;
    while (n != 0)
    {
        num = n % 2;
        n = n / 2;
        p[i] = num;
        i = i + 1;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << p[j];
    delete[] p;
    return 0;
}
