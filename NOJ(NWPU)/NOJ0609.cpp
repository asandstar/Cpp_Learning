/*
题目内容：编制函数void deletechar(char S[],char c)，其功能是删除一个字符串S中指定的字符c。要求原始字符串在主函数中输入，处理后的字符串在主函数中输出。
输入格式：第1行输入字符串,第2行输入删除字符
输出格式：输出为字符串。
输入样例：
Nikon: wfeel thew awir arouwnd the wuniverse
w
输出样例：
Nikon: feel the air around the universe
*/
#include <iostream>
#include <cstring>
using namespace std;
void deletechar(char S[], char c)
{
    int n = strlen(S);
    for (int i = 0; i < n; i++)
        if (S[i] == c)
            continue;
        else
            cout << S[i];
}
int main()
{
    char s[50];
    cin.get(s, 50);
    char c;
    cin >> c;
    deletechar(s, c);
}
