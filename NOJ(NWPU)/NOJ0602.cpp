/*
题目内容：编写一个程序实现将字符串中的所有”you”替换成”we”
输入格式：输入数据是一个字符串，长度不超过1000
输出格式：对于输入的每一行，输出替换后的字符串
输入样例：you are what you do
输出样例：we are what we do
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string &replace_all_distinct(string &str, const string &old_value, const string &new_value)
{
    for (string::size_type pos(0); pos != string::npos; pos += new_value.length())
    {
        if ((pos = str.find(old_value, pos)) != string::npos)
            str.replace(pos, old_value.length(), new_value);
        else
            break;
    }
    return str;
}

int main()
{
    string str;
    getline(cin, str);
    replace_all_distinct(str, "you", "we");
    cout << str;
    return 0;
}
