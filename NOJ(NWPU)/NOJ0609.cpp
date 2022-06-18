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