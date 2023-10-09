/*
题目内容：输入任意一个字符串（包含n个字符，1≤n≤100），编写函数，将此字符串中从第m个字符开始（以0起始）的全部字符复制成为另一个字符串并输出（m＜n）。
输入格式：第1行输入字符串，第2行输入整数m。
输出格式：输出为字符串。
输入样例：
112233445566778899
7
输出样例：
45566778899
*/
#include <iostream>
using namespace std;
void output(char s[], char c[], int m)
{
    string startm = s;
    string outm = c;
    outm = startm.substr(m, startm.length() - m);
    cout << outm;
}
int main()
{
    char str[80], copy[80];
    cin >> str;
    int m;
    cin >> m;

    output(str, copy, m);
}
