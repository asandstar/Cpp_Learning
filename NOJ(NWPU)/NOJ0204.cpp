/*
题目内容：百分制成绩转换为五分制成绩，转换规则为：90～100：A；80～89：B；70～79：C；60～69：D；60分以下：E。输入百分制成绩，输出对应的五分制成绩。
输入格式：输入为整型
输出格式：输出为字符型
输入样例：87
输出样例：B
*/
#include <iostream>
using namespace std;
int main()
{
    int g;
    cin >> g;
    if (g >= 90)
        cout << "A";
    else if (g >= 80)
        cout << "B";
    else if (g >= 70)
        cout << "C";
    else if (g >= 60)
        cout << "D";
    else
        cout << "E";
    return 0;
}
