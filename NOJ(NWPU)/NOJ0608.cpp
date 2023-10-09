/*
题目内容：编写一个函数void stringmerge(char S1[],char S2[])，
对键盘输入的两个字符串S1和S2进行连接，结果送回到S1中。在主函数输入输出，调用这个函数合并字符串。
输入格式：用2行分别输入2个字符串。
输出格式：输出为字符串。
输入样例：
hello
world
输出样例：
helloworld
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    s1 = s1 + s2;
    cout << s1;
    return 0;
}
