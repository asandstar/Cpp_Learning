/*
题目内容：请编写程序，对键盘输入的字符串进行逆序，逆序后的字符串仍然保留在原来字符数组中，最后输出。
输入格式：输入字符串时，输入以等号（=）结束（注意不是回车）
输出格式：输出为字符串。
输入样例：
hello world=
dlrow olleh
输出样例：
dlrow olleh
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string flag = "=";
    int pos = s.find_first_of(flag);
    for (int i = pos - 1; i >= 0; i--)
        cout << s[i];
    return 0;
}
