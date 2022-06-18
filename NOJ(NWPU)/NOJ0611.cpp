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