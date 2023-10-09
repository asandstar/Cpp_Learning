/*
题目内容：请编写一个函数int stringcompare(char S1[],char S2[])，将两个字符串S1和S2比较。如果S1＞S2，输出一个正数；S1=S2，输出0；S1＜S2，输出一个负数。在主函数两个字符串用gets函数读入。输出的正数或负数的绝对值应是相比较的两个字符串相对应字符的ASCII码的差值。例如，’A’与’C’相比，由于’A’＜’C’，应输出负数，由于’A’与’C’的码差值为2，因此应输出“－2”。同理：“And”和“Aid:”比较，根据第2个字符比较结果，’n’比’i’大5，因此应输出“5”。
输入格式：第1行输入S1，第2行输入S2。
输出格式：输出为整型。
输入样例：
And
Aid
输出样例：
5
*/
#include <iostream>
#include <string.h>
using namespace std;
int find_difference(char S1[], char S2[])
{
    int d;
    for (int i = 0; i < 80; i++)
    {
        if (S1[i] != S2[i])
        {
            d = int(S1[i]) - int(S2[i]);
            break;
        }
    }
    cout << d;
    return 0;
}
int stringcompare(char S1[], char S2[])
{
    if (strcmp(S1, S2) == 0)
        return 0;
    else
        find_difference(S1, S2);
    return 0;
}
int main()
{
    char s1[80], s2[80];
    cin >> s1 >> s2;
    stringcompare(s1, s2);
}
