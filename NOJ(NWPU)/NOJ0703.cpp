/*
题目内容：编写函数void strencode(char *s)；函数的功能是将字符串中的大写字母加3，
小写字母减3。在主函数中输入字符串，调用函数后输出结果字符串。
输入格式：输入一行字符串。
输出格式：输出编码操作后的字符串。
输入样例：ABCDEF
输出样例：DEFGHI
*/
#include <iostream>
#include <cstring>
using namespace std;
void strencode(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 3;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 3;
        cout << s[i];
    }
}
int main()
{
    char s[100];
    for (int i = 0; i < 100; i++)
        cin >> s[i];
    strencode(s);
    return 0;
}
