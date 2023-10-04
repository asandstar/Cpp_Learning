/*
题目内容：到了某公司发工资的日期，财务部的小明最近在考虑一个问题：
如果每个员工的工资额都知道，最少需要准备多少张人民币，才能在给每位员工发工资的时候都不用员工找零呢？
这里假设员工的工资都是正整数，单位元，人民币一共有100元、50元、10元、5元、2元和1元六种。
请设计一个函数int salary(n)，参数为某个员工的工资，返回值为最少发放的人民币张数。
输入格式：输入数据第一行是一个整数n（n＜100），表示员工的人数，然后是n个员工的工资。
输出格式：输出一个整数x，表示至少需要准备的人民币张数。
输入样例：
3
1 2 3
输出样例：
4
*/
#include <iostream>
using namespace std;
int salary(int n)
{
    int i, count;
    int a, b, c, d, e, f;
    int *p = new int[n];
    count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> p[i];
        a = p[i] / 100;
        p[i] = p[i] - a * 100;
        b = p[i] / 50;
        p[i] = p[i] - b * 50;
        c = p[i] / 10;
        p[i] = p[i] - c * 10;
        d = p[i] / 5;
        p[i] = p[i] - d * 5;
        e = p[i] / 2;
        p[i] = p[i] - e * 2;
        f = p[i];
        count = a + b + c + d + e + f + count;
    }
    cout << count;
    delete[] p;
    return 0;
}
int main()
{
    int n, i;

    cin >> n;
    salary(n);

    return 0;
}
