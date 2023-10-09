/*
题目内容：
编写实现下面字符串操作要求的函数。在主函数中输入字符串"www.nwpu.edu.cn"，调用函数并得到结果。
（1）函数void Left(char src[],int n,char dest[])将字符串src左边n个字符复制到dest中。
（2）函数void Right(char src[],int n,char dest[])将字符串src右边n个字符复制到dest中。
（3）函数void Mid(char src[],int loc,int n,char dest[])将字符串src自下标loc开始的n个字符复制到dest中。
输入格式：第1行输入字符串，第2行输入n和loc值，用空格分隔。
输出格式：第1行输出调用函数Left的结果，第2行输出调用函数Right的结果，第3行输出调用函数Mid的结果
输入样例：
www.nwpu.edu.cn
5 5
输出样例：
www.n
du.cn
wpu.e
*/
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;
void reverse1(char s[])
{
    int i, t, len;
    for (i = 0, len = strlen(s) - 1; i < len; i++, len--)
    {
        t = s[i];
        s[i] = s[len];
        s[len] = t;
    }
}
void Left(char src[], int n, char dest[])
{
    strncpy(dest, src, n);
    cout << dest << endl;
}
void Right(char src[], int n, char dest[])
{
    reverse1(src);
    strncpy(dest, src, n);
    reverse1(dest);
    cout << dest << endl;
    reverse1(src);
}
void Mid(char src[], int loc, int n, char dest[])
{
    string str = src;
    string st = dest;
    st = str.substr(loc, n);
    cout << st << endl;
}
int main()
{
    char s[100], d[100];
    cin >> s;
    int n, l;
    cin >> n >> l;

    Left(s, n, d);
    Right(s, n, d);
    Mid(s, l, n, d);
    return 0;
}
