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