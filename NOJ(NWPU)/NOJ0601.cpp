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