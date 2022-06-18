#include <iostream>
using namespace std;
void output(char s[], char c[], int m)
{
    string startm = s;
    string outm = c;
    outm = startm.substr(m, startm.length() - m);
    cout << outm;
}
int main()
{
    char str[80], copy[80];
    cin >> str;
    int m;
    cin >> m;

    output(str, copy, m);
}