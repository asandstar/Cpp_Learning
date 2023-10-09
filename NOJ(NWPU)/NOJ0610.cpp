/*
题目内容：有一篇文章，共有3行文字，每行最多有80个字符。
编写程序分别统计出文章中英文大写字母、小写字母、数字、空格及其他字符的个数。
输入格式：输入3行字符串
输出格式：输出英文大写字母、小写字母、数字、空格、其他字符的个数，用空格分隔。
输入样例：
Nikon at the frontiers of science.
Flash(Adobe Flash Media Rights Management Server)
21.03,-0.87,-3.97%
输出样例：
8 62 10 10 11
*/
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
void count(char S[][80])
{
    int countA, counta, countd, counts, counte;
    countA = counta = countd = counts = counte = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            if (S[i][j] >= 'A' && S[i][j] <= 'Z')
                countA += 1;
            else if (S[i][j] >= 'a' && S[i][j] <= 'z')
                counta += 1;
            else if (S[i][j] >= '0' && S[i][j] <= '9')
                countd += 1;
            else if (S[i][j] == ' ')
                counts += 1;
            else if (S[i][j] > '\0')
                counte += 1;
        }
    }
    cout << countA << ' ' << counta << ' ' << countd << ' ' << counts << ' ' << counte;
    return;
}
int main()
{
    char buf[3][80] = {0};

    for (int i = 0; i < 3; i++)
        cin.getline(buf[i], 80);
    /*for (int i = 0; i < 3; i++)
        for (int j = 0; j < 80; j++)
            cout << buf[i][j] << endl;*/
    count(buf);
    return 0;
}
