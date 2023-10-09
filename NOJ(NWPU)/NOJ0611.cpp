/*
题目内容：编写程序以字符串为单位，以空格或标点符号（字符串中仅含英文逗号','或小数点'.'作为标点符号）作为分隔符，
对字符串中所有单词进行倒排，然后把已处理的字符串（应不含标点符号）打印出来。
输入格式：输入一个字符串（包含大小写字母、空格、逗号或小数点）
输出格式：输出处理后的字符串。
输入样例：I am a student. I like study.
输出样例：study like I student a am I
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, str;
    string sen[100];
    getline(cin, s);
    int n = s.length();
    int m = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ',' || s[i] == '.' || s[i] == ' ')
        {
            m++;
            continue;
        }
        sen[m] += s[i];
    }
    for (int i = m; i > 0; i--)
        if (sen[i] != "\0")
            cout << sen[i] << " ";
    cout << sen[0];
}
